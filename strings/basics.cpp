#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() 
{
vector<int> vec = {4,5,6,7,0,1,2};
sort(vec.begin(),vec.end());
int st = 0,end = vec.size()-1,mid;
int target = 0;
while(st<=end)
{
    mid = st + (end - st)/2;
    if(vec[mid]<target)
    st = mid+1;
    else if(vec[mid]>target)
    end = mid - 1;
    else
    {
    cout<<mid<<endl;
    break;
    }
}
    return 0;
}