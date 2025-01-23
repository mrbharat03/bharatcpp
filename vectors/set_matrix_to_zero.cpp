#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vec = {{1,-1,1},{-1,0,1},{1,1,1}};
    int m = vec.size(),n=vec[0].size();
    vector<vector<int>> arr;
    for(int i=0;i<m;i++){
        vector<int> ans;
        for(int j=0;j<n;j++){
        ans.push_back(vec[i][j]);
        }

        arr.push_back({ans});
    }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0){
                    for(int k=0;k<n;k++){
                        vec[i][k] = 0;
                    }
                    for(int k=0;k<m;k++){
                        vec[k][j]=0;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}