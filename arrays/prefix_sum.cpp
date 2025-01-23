#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[5] = {5,4,1,2,3};
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += arr[i];
        arr[i] = sum;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}