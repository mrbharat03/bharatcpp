#include<iostream>
#include<vector>
using namespace std;
int BinSearch(vector<int>& vec,int T,int st,int end);
int BinSearch(vector<int>& vec,int T,int st,int end){
    if(st<=end){
    int mid = st + (end - st)/2;
    if(vec[mid] == T) return mid;
    else if(vec[mid]>T)  return BinSearch(vec,T,st,mid-1);
    else  return BinSearch(vec,T,mid+1,end);
    return mid;
    }
    return -1;
}
int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter size "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int T;
    cin>>T;
    cout<<BinSearch(vec,T,0,n-1)<<endl;
    return 0;
}