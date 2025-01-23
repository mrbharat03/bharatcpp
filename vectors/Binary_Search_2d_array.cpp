#include<iostream>
#include<vector>
using namespace std;

    bool inrow(vector<vector<int>> &vec, int x,int midR){
        int st = 0 , end = vec[0].size() - 1 ;
        while(st<=end){
            int mid = st + ( end - st ) / 2 ; 
            if(vec[midR][mid] == x)  return true;
            else if(vec[midR][mid]>x)  end = mid - 1 ; 
            else st = mid + 1 ; 
        }
        
        return false;
    }


    bool invector(vector<vector<int>> &vec,int x){
        int m = vec.size()-1,n=vec[0].size()-1;
            int stR = 0,endR = m;
            while(stR<=endR){
                int midR = stR + ( endR - stR ) / 2 ; 
                if(vec[midR][0]<=x && vec[midR][n]>=x)  return inrow(vec,x,midR);
                else if(vec[midR][0]>x)  endR = midR - 1 ;
                else stR = midR + 1 ; 
            }
        
            return false;

}
int main()
{
    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int tar = 7;
    if(invector(vec,tar)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}