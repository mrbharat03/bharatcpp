#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN and INT_MAX
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) { // Check for invalid size
        cout << "Array size must be positive!" << endl;
        return 1;
    }

    vector<int> arr(n); // Dynamic array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int MaxSum = INT_MIN, CurrSum = 0;

    // Apply Kadane's Algorithm
    for (int i = 0; i < n; i++) {
        CurrSum += arr[i];
        MaxSum = max(MaxSum, CurrSum);
        if (CurrSum < 0) {
            CurrSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << MaxSum << endl;
    return 0;
}
