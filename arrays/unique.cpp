#include<iostream>
using namespace std;
int Unique(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        bool flag = true;
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
        return arr[i];
        }
    }
    return -1;
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
    cout<<Unique(arr,n)<<endl;
    return 0;
}