#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(char val : str){
        if(val == ' '){
            val = '\n';
        }
        cout<<val;
    }
    return 0;
}