#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    char ch;
    cout<<"Enter '+' for addition"<<endl;
    cout<<"Enter '-' for subtraction"<<endl;
    cout<<"Enter '*' for multiplication"<<endl;
    cout<<"Enter '/' for division"<<endl;
    cout<<"Enter '%' for remainder"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break; 
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
        default:
        cout<<"Wrong Entry "<<endl;
        break;
    }
    return 0;
}