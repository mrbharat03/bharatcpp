#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = " hello world";
    cout<<str1<<endl;

    string str2 = str1;

    str1 = "welcome to my code";
    cout<<str1<<endl;

    string str3 = str1+str2; // concatenation
    cout<<str3<<endl;

    cout<<(str1>str2)<<endl;

    cout<<(str1+str2==str3)<<endl;

    //length of string str.length()
    cout<<str3.length()<<endl;
    
    return 0;
}