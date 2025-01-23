#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Stack{
public:
    int capacity;
    int *arr;
    int top;
    Stack(int c){
        this->capacity = c;
        this->arr = new int[capacity];
        this->top=-1;
    }
    void push(int x){
        if(top == capacity-1){
            cout<<"OVERFLOW\n";
            return;
        }
        top++;
        this->arr[this->top] = x;
    }
    void pop(){
        if(top == -1){
            cout<<"UNDERFLOW\n";
            return;
        }

        top--;
    }
    void gettop(){
        if(top != -1){
            cout<<this->arr[this->top]<<endl;;
        }
        else{
            cout<<"UNDERFLOW\n";
        }
    }
    bool isempty(){
        return (top==-1) ? true : false ;
    }
    bool isfull(){
        return (top == capacity-1) ? true : false;
    }
};
int main(){
    Stack s(5);
    s.gettop();
    s.push(15);
    s.push(19);
    s.push(6);
    s.gettop();
    s.push(1);
    s.push(99);
    s.push(35);
    s.gettop();
    cout<<s.isempty()<<endl;
    cout<<s.isfull()<<endl;
    return 0;
}