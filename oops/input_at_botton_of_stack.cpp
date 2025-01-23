#include<iostream>
#include<stack>
using namespace std;
void bottom(stack<int> &s){
    if(s.size() == 1){
        s.pop();
        return;
    }
    int curr = s.top();
    s.pop();
    bottom(s);
    s.push(curr);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    bottom(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}