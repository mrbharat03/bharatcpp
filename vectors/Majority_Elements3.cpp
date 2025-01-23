#include<iostream>
#include<vector>
using namespace std;
int maj_ele(vector<int> & vec)
{
    int n= vec.size();
    int freq = 0,ans = 0;
    for(int i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=vec[i];
        }   
        if(ans==vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {1,4,4,4,1};
    int result = maj_ele(vec);
    cout<<result;
    return 0;
}