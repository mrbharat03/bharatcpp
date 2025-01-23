#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {5,7,9,3,4};
    int n= vec.size();
    int target,count=0;
    cout<<"Enter target sum ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(vec[i]+vec[j]+vec[k]==target)
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}