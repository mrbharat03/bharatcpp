#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,0,1,1,0};
    int n=5;
    cout<<"enter the size of an array ";
    cin>>n;
    int count0=0,count1=1;
    for(int i=0;i<n;i++){
        if(vec[i]==0)
        count0++;
        else
        count1++; 
    }
    for(int i=0;i<count0;i++){
        vec[i]=0;
    }
    
    for(int i=count0;i<count1+count0;i++){
        vec[i]=1;
    }
    for(int el : vec){
        cout<<el<<" ";
    }
    return 0;
}