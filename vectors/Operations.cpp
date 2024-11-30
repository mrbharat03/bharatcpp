#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> vec;
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    cout<<"size = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size = "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec[2]<<endl;
    return 0;
}