#include<iostream>
#include<vector>
using namespace std;
bool is_sorted(vector<int>& vec,int n);
bool is_sorted(vector<int>& vec,int n){
    if(n==1 || n==0) return true;
    return vec[n-1] >= vec[n-2] && is_sorted(vec,n-1);
}
int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter size ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    cout<<is_sorted(vec,n)<<endl;
    return 0;
}