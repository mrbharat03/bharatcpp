#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(vec[i]*vec[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}