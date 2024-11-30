#include<iostream>
#include<vector>
#include<algorithm>  //contains the algorithms to sort an array or vector
using namespace std;
int maj_ele(vector<int> & vec)
{
    int n= vec.size();
    sort(vec.begin(),vec.end());  //sorting
    int freq =1,ans = vec[0];
    for(int i=1;i<n;i++)
    {
        if(vec[i]==vec[i-1]){
            freq++;
        }
        else
        {
            freq = 1;
            ans = vec[i];
        }
        if(freq>n/2)
        {
            return ans;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {1,4,4,4,1};
    int result = maj_ele(vec);
    cout<<result;
    return 0;
}