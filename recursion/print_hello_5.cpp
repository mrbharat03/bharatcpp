#include<iostream>
using namespace std;
void PrintHello();
void PrintHello()
{
    static int i=0;
    if(i==5)  return;
    i++;
    cout<<"Hello World"<<endl;
    PrintHello();
    return;
}
int main(){
    PrintHello();
    return 0;
}