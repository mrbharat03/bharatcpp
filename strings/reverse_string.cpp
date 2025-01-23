#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int st=0,end=str.length()-1;
    while(st<=end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    cout<<str<<endl;
    return 0;
}