#include<iostream>
#include<limits.h>
using namespace std;
void Arr(int arr[],int n)
{
    int max= INT_MIN,min=INT_MAX,a,b;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
        max = arr[i];
        a=i;
        }
        if(min>arr[i])
        {
        min = arr[i];
        b=i;
        }
    }
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
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
    Arr(arr,n);
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
    return 0;
}