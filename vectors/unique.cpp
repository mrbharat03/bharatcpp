#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,5,3,1,2};
    int ans = 0;
    for(int el : vec){
        ans ^= el;
    }
    cout<<ans<<endl;
    return 0;
}