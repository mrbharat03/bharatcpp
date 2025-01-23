#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = {'a','b','b','c','c','c'};
    int idx = 0;
    int n = str.length();
    for(int i=0;i<n;i++){
        char ch = str[i];
        int count = 0;
        while(ch == str[i] && i<n){
            i++;
            count++;
        }
        if(count == 1)  str[idx++] = ch;
        else{
            str[idx++] = ch;
            string c = to_string(count);
            for(char dig : c){
                str[idx++] = dig;
            }
        }
        i--;
    }
    cout<<str<<endl;
    return 0;
}