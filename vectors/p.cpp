#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                ans[i] *= nums[j];
            }
        }
        for(int val : ans)
        {
            cout<<val<<endl;
        }
    return 0;
}