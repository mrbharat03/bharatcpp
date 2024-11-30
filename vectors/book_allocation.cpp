#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &vec,int n,int m,int mid)
{
    int students = 1,pages=0;
    for(int i=0;i<n;i++){
        
        if(vec[i]+pages<= mid)
        pages += vec[i];
        else{
            students++;
            pages=vec[i];
        }
    }
    if(students>m)
    return false;
    else 
    return true;
}
int bookAllocation(vector<int> &vec,int n,int m)
{
    int sum = 0, ans =-1;
    for(int i=0;i<n;i++)
    {
        sum += vec[i];
    }
    int st = 0,end = sum;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(vec,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else
        st = mid+1;
    }
    return ans;
}
int main()
{
    vector<int> vec = {15,17,20};
    int n = vec.size();
    int m = 2;
    cout<<bookAllocation(vec,n,m)<<endl;
    return 0;
}