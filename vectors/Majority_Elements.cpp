#include<iostream>
#include<vector>
using namespace std;
int maj_ele(vector<int> & vec)
{
    int n= vec.size();
    for(int val : vec)
    {
        int freq =0;
        {
            for(int el : vec)
            {
                if(el==val)
                {
                freq++;
                }
                if(freq>n/2)
                {
                return val;
                }
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {1,2,2,2,1};
    int result = maj_ele(vec);
    cout<<result;
    return 0;
}