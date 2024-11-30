#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    vector<int> vec;
    int arr[n],target;
    cout<<"Enter the target variable ";
    cin>>target;
    cout<<"Enter the elements in of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == target)
            vec.push_back(i);
            vec.push_back(j);
        }
    }
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    return 0;
}