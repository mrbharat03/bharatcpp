#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 12;
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i=0,j=n-1;
        while(i<=j){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            if(sum == target)
            {
            ans.push_back(i);
            ans.push_back(j);
            return 0;
            }
            else if(sum>target)
                j--;
            else
                i++;
        }
    return 0;
}