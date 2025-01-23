#include<iostream>
using namespace std;
void Search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(x == arr[i])
        {
        cout<<"Element is found at index "<<i;
        }
    }
    return;
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
    int target;
    cout<<"Enter the element to be searched"<<endl;
    cin>>target;
    Search(arr,n,target);
    return 0;
}