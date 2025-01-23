#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& vec,int st,int mid,int end){
    vector<int> temp;
    int i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(vec[i]<=vec[j]) temp.push_back(vec[i++]);
        else temp.push_back(vec[j++]);
    }

    while(i<=mid)  temp.push_back(vec[i++]);
    while(j<=end)  temp.push_back(vec[j++]);
    for(int k=0;k<temp.size();k++){
        vec[k+st] = temp[k];
    }
}
void mergesort(vector<int>& vec,int st,int end){
    if(st<end){
        int mid = st + ( end - st ) / 2 ;
        mergesort(vec,st,mid);
        mergesort(vec,mid+1,end);

        merge(vec,st,mid,end);
    }
}
int main(){
    vector<int> vec = {45,25,91,82,12,17,64};
    int n = vec.size();
    mergesort(vec,0,n-1);
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}