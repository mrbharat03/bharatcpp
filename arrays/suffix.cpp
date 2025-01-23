#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {5,2,4,3};
    int sum=0;
    for(int val : vec)  sum += val;
    int prfsum=0;
    for(int i=0;i<vec.size();i++){
        prfsum += vec[i];
        int sufsum = sum - prfsum;
        if(prfsum == sufsum){
            cout<<"true"<<endl;
            break;
        }
    }   
    return 0;
}