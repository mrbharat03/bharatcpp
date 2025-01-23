#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector ";
    cin>>n;
    vector<int> ans;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(vec[i] %2 == 0){
            ans.push_back(vec[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(vec[i] %2 != 0){
            ans.push_back(vec[i]);
        }
    }
    for(int el : ans){
        cout<<el<<" ";
    }
    return 0;
}