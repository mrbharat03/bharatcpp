#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> vec,int m,int n,int mid){
    int stu = 1 , pages = 0 ;
    for(int i=0;i<n;i++){
        if(pages + vec[i] <= mid)  pages += vec[i];
        else stu++,pages = vec[i];
    }

    return (stu>m) ? false : true;
}
int findPages(vector<int> vec,int m,int n){
    int ans = -1,st=0,end=0;
    if(m>n)  return ans;
    for(int val : vec){
        end += val;
        if(st < val)  st = val;
    }
    while(st <= end){
        int mid = st + ( end - st ) / 2 ;
        if(isvalid(vec,m,n,mid)) end = mid - 1,ans = mid ;
        else st = mid + 1 ;
    }

    return ans;
}
int main()
{
    vector<int> vec = {15,17,20};
    int n = vec.size();
    int m = 2;
    cout<<findPages(vec,m,n)<<endl;
    return 0;
}