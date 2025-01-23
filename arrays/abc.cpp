#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])  swap(arr[j],arr[j+1]);
        }
    }
}
void insertionsort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
int main(){
    vector<int> vec = {45,25,91,82,12,17,64};
    int n = vec.size();
    insertionsort(vec,n);
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}