#include<iostream>
using namespace std;
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
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}