#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
bool isvalid(vector<int> vec,int n,int k,int mid){
    int cow = 1,lp=vec[0];
    for(int i=1;i<n;i++){
        if(vec[i] - lp >= mid) cow++,lp=vec[i];
        if( cow == k ) return true;
    }
    return false;
}
int cows(vector<int> vec,int n,int k){
    if(k > n) return -1;
    int st = 0 , end = 0;
    int ans = 0;
    sort(vec.begin(),vec.end());
    st = 1 , end = vec[n-1] - vec[0];

    while(st <= end){
        int mid = st + ( end - st ) / 2 ;
        if(isvalid(vec,n,k,mid)) ans = mid,st = mid+1;
        else end = mid - 1 ;
    }

    return ans;
}
int main(){
    vector<int> vec = {6, 7 ,9 ,11 ,13 ,15};
    int n = vec.size(),k = 4;
    cout<<cows(vec,n,k);
    return 0;
}