#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printelements(vector<vector<int>> ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<int> vec = {-1,0,1,2,-1,-4};
    int n = vec.size();
    vector<vector<int>> ans;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        if(i>0 && vec[i]==vec[i-1])  continue;
        int j = i+1,k=n-1;
        while(j<k){
            int sum = vec[i]+vec[j]+vec[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                ans.push_back({vec[i],vec[j],vec[k]});
                j++;k--;
                while(j<k && vec[j] == vec[j-1]) j++;
            }
        }
    }

    printelements(ans);
    return 0;
}