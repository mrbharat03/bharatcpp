#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool isvalid(vector<int> vec,int n,int k,int mid){
    int pain = 1,time = 0 ;
    for(int i=0;i<n;i++){
        if(time + vec[i] <= mid)  time += vec[i];
        else time = vec[i],pain++;
    }

    return (pain > k) ? false : true;
}
int painter(vector<int> vec,int n,int k){
    int st = 0,end=0;
    for(int val : vec){
        st = max(st,val);
        end += val;
    }
    int ans = -1;
    if(k > n)  return ans;
    while(st <= end){
        int mid = st + ( end - st ) / 2 ;
        if(isvalid(vec,n,k,mid)) ans = mid,end = mid-1;
        else st = mid+1;
    }

    return ans;
}
int main(){
    vector<int> vec = {35,88,99,15};
    int n = vec.size();
    int k = 2;
    cout<<painter(vec,n,k)<<endl;
    return 0;
}