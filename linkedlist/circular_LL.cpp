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

class CircularLinkedList{
public:
    Node* head;
    Node* tail;
    CircularLinkedList(){
        head=tail=NULL;
    }

    void InsertAtHead(int x){
        Node* newNode= new Node(x);
        if(head==NULL){
            head=tail=newNode;
            tail->next = head;
        }
        else{
            newNode->next=tail->next;
            tail->next=newNode;
            head=newNode;
        }
    }
    void InsertAtTail(int x){
        Node* newNode=new Node(x);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            tail->next=newNode;
            newNode->next=head;
            tail=newNode;
        }
    }
    void DelHead(){
        if(head == NULL){
            cout<<"Circular LinkedList is already empty\n";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
        }
        Node* temp=head;
        head=head->next;
        tail->next=head;

        temp->next=NULL;
        delete temp;
    }
    void DelTail(){
        if(head == NULL){
            cout<<"Circular LinkedList is already empty\n";
            return;
        }
        if(head==tail){
            delete tail;
            head=tail=NULL;
            return;
        }
        Node* temp=tail;
        Node* prev=head;
        while(prev->next != tail) prev=prev->next;

        tail=prev;
        tail->next=head;
        temp->next=NULL;
        delete temp;
    }
    void display(){
        Node* temp=head;
        cout<<temp->val<<"->";
        temp=temp->next;
        while(temp !=head){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<temp->val<<"\n";
    }
};
int main(){
    CircularLinkedList cll;
    cll.InsertAtTail(25);
    cll.InsertAtTail(5);
    cll.InsertAtTail(52);
    cll.InsertAtTail(12);
    cll.DelTail();
    cll.display();
    return 0;
}