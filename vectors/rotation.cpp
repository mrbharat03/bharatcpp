#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vec[] = {1,2,3,4,5};
    int n = 5;
    int k = 7;
    while(n){
    if(k>n)
        k = k%n;
    else
        break;
        }
    int j = 0;
    int ans[n];
    for(int i=n-k;i<n;i++){
        ans[j++] = vec[i];
    }
    for(int i=0;i<n-k;i++){
        ans[j++] = vec[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}