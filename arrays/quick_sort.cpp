#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& vec,int st,int end,int pivit){
    int idx = st-1;
    for(int j=st;j<end;j++){
        if(vec[j]<=pivit){
            idx++;
            swap(vec[idx],vec[j]);
        }
    }

    swap(vec[idx+1],vec[end]);

    return idx+1;
}
void quicksort(vector<int>& vec,int st,int end){
    if(st<end){
        int pivit = vec[end];
        int pivIdx = partition(vec,st,end,pivit);
        quicksort(vec,st,pivIdx-1);
        quicksort(vec,pivIdx+1,end);
    }
}
int main(){
    vector<int> vec = {45,91,42,88,17,12,85};
    int n = vec.size();
    quicksort(vec,0,n-1);

    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}