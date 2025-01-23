#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {9,8,7,3,5};
    int n = vec.size();
    int targetSum;
    int count = 0;
    cout<<"Enter target sum ";
    cin>>targetSum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]+vec[j] == targetSum)
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}