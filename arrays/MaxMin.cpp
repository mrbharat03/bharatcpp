#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,max = INT_MIN,min=INT_MAX;
    cout<<"Enter the size of an array ";
    cin>>n;
    int marks[n];
    cout<<"Enter the elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        if(marks[i]>max)
        max = marks[i];
        if(marks[i]<min)
        min = marks[i];
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}