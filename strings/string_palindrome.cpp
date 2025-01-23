#include<iostream>
#include<string>
using namespace std;


bool isvalid(char ch){
    if((tolower(ch)>=97 && tolower(ch)<=122) || (ch>=48 && ch<=57)){
        return true;
    }
    return false;
}


bool isPalindrome(string s) {
    int n = s.length();
    if(n==1)  return true;
    int i=0,j=n-1;
    while(i<j){
        if(!(isvalid(s[i]))){
            i++;
            continue;
        }
        if(!(isvalid(s[j]))){
            j--;
            continue;
        }
        if(tolower(s[i++]) != tolower(s[j--])){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    if(isPalindrome(str))  cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}