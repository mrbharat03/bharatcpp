#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int main(){
    stack<char> s;
    string str;
    cin>>str;
    for(char ch : str){
        if(ch == '(') s.push(ch);
        else if(ch == ')'){
            if(!s.empty() && s.top() == '(') s.pop();
            else{
                cout<<"unbalanced\n";
                return 0;
            }
        }
        else{
            cout<<"unbalanced\n";
            return 0;
        }
    }
    if(s.empty()) cout<<"balanced\n";
    else cout<<"unbalanced\n";
    return 0;
}