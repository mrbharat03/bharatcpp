#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool flag = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j]){
            swap(arr[j+1],arr[j]);
            flag = true;
            }
        }
        if(!flag)
        break;
    }
    return;
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si = j;
            }
        }
        if(arr[i]>arr[si])
        swap(arr[i],arr[si]);
    }
    return;
}
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    return;
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
int main()
{
    int arr[] = {2,4,5,3,1};
    int n = 5;
    InsertionSort(arr,n);
    print(arr,n);
    return 0;
}