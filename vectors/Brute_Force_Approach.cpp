#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    int n,MaxSum = INT_MIN;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int st =0;st<n;st++)
    {
        int CurrSum = 0;
        for(int end = st;end<n;end++)
        {
            CurrSum += arr[end];
            MaxSum = max(CurrSum,MaxSum); 
        }
    }
    cout<<MaxSum;
    return 0;
}