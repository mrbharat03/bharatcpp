#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
class Stack{
    Node* head;
    int capacity;
    int currsize;
public:
    Stack(int c){
        this->capacity=c;
        currsize=0;
        head=NULL;
    }
    void push(int x){
        if(currsize==capacity){
            cout<<"OVERFLOW\n";
            return;
        }
        Node* newNode=new Node(x);
        newNode->next=head;
        head=newNode;
        currsize++;
        return;
    }
    void pop(){
        if(head== NULL){
            cout<<"UNDERFLOW\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void gettop(){
        if(head == NULL){
            cout<<"Stack is empty\n";
            return;
        }
        cout<<head->val<<endl;
    }
    bool isempty(){
        return (head==NULL);
    }
    bool isfull(){
        return (currsize==capacity);
    }
    int  getsize(){
        return this->currsize;
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
    cout<<s.getsize()<<endl;

    return 0;
}