#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int> & nums,int target)
{
vector<int> ans;
int n = nums.size();
int i=0,j=n-1;
while(i<j)
{
    if(nums[i]+nums[j]>target)
    {
        j--;
    }
    else if(nums[i]+nums[j]<target)
    {
        i++;
    }
    else
    {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}
return ans;
}
int main()
{
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int> res = PairSum(vec,target);
    cout<<res[0]<<endl<<res[1]<<endl;
    return 0;
}