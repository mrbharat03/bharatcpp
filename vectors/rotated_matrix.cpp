#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    int n = vec.size();
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int> ans;
        for(int j=0;j<n;j++){
            ans.push_back(vec[i][j]);
        }
        arr.push_back({ans});
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vec[n-j-1][i] = arr[i][j];
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}