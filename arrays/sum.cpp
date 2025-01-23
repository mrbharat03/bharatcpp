#include<iostream>
using namespace std;
int Sum(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum = "<<Sum(arr,n);
    return 0;
}