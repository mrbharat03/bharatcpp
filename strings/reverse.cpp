#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "IceCreAm";
    int st = 0,end = s.length()-1;
    while(st<end){
            if((s[st] == 'a' || s[st] == 'e' || s[st] == 'o' || s[st] == 'i' || s[st] == 'u' || s[st] == 'A' || s[st] == 'E' || s[st] == 'I' || s[st] == 'O' || s[st] == 'U') && (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U')){
            swap(s[st],s[end]);
            st++;
            end--;
            }
            if(s[st] != 'a' || s[st] != 'e' || s[st] != 'o' || s[st] != 'i' || s[st] != 'u' || s[st] != 'A' || s[st] != 'E' || s[st] != 'I' || s[st] != 'O' || s[st] != 'U')
            st++;
            if(s[end] != 'a' || s[end] != 'e' || s[end] != 'o' || s[end] != 'i' || s[end] != 'u' || s[end] != 'A' || s[end] != 'E' || s[end] != 'O' || s[end] != 'I' || s[end] != 'U')
            end--;
        }
    cout<<s<<endl;
    return 0;
}
