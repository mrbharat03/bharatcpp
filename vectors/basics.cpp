#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> vec(7,19);
    for(int i : vec)
    {
    cout<<i<<endl;
    }
    return 0;
}