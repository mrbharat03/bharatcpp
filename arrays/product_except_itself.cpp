#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> vec = {1,2,3,4};
    int n = 4 ;
    vector<int> arr(n,1);
    
    for(int i=1;i<n;i++){
        arr[i] = arr[i-1] * vec[i-1]; 
    }

    int suf = 1;
    for(int i=n-2;i>=0;i--){
        suf *= vec[i+1];
        arr[i] *= suf; 
    }

    for(int val : arr)  cout<<val<<" ";
    return 0;
}