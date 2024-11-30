#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int> vec = {7,1,5,4,6,3};
    int MP = 0;
    int BB = vec[0];
    for(int i=1;i<vec.size();i++)
    {
        if(BB<vec[i])
        {
            MP = max(MP,vec[i]-BB);
        }
        BB = min(BB,vec[i]);
    }
    cout<<MP;
    return 0;
}