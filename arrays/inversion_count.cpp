#include<iostream>
#include<vector>

using namespace std;
int merge(vector<int>& vec,int st,int mid,int end){
    int i=st,j=mid+1,count = 0;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(vec[i] <= vec[j]){
            temp.push_back(vec[i++]);
        }
        else{
            temp.push_back(vec[j++]);
            count += mid-i+1;
        }
    }
    while(i<=mid){
        temp.push_back(vec[i++]);
    }
    while(j<=end){
        temp.push_back(vec[j++]);
    }

    for(int k=0;k<temp.size();k++){
        vec[st+k] = temp[k];
    }

    return count;
}
int mergesort(vector<int>& vec,int st,int end){
    if(st<end){
        int mid = st + (end-st)/2;
        int ans1 = mergesort(vec,st,mid);
        int ans2 = mergesort(vec,mid+1,end);

        int x = merge(vec,st,mid,end);
        return x + ans1 + ans2;
    }
return 0;
}
int main(){
    vector<int> vec = {1,3,5,10,2,6,8,9};
    int n = vec.size();
    cout<<mergesort(vec,0,n-1)<<endl;
    return 0;
}