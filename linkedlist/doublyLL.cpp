#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        next=prev=NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=tail=NULL;
    }
    void push_front(int x){
        Node* newNode= new Node(x);
        if(head ==NULL){
            head=tail=newNode;
            return;
        }

        newNode->next =head;
        head->prev =newNode;
        head=newNode;
    }
    void push_back(int x){
        Node* newNode=new Node(x);
        if(head ==NULL){
            head=tail=newNode;
            return;
        }
        tail->next =newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void push_AnyPos(int x,int pos){
        if(pos ==0){
            push_front(x);
            return;
        }
        Node* newNode=new Node(x);
        Node* temp=head;
        int cur_pos=0;
        while(temp != NULL && cur_pos != pos-1){
            cur_pos++;
            temp=temp->next;
        }
        temp->next->prev=newNode;
        newNode->next =temp->next;

        temp->next=newNode;
        newNode->prev=temp;

    }
    void pop_AnyPos(int pos) {
    if (pos < 0 || head == NULL) {
        return;
    }
    
    if (pos == 0) {
        pop_front();
        return;
    }

    Node* temp = head;
    int cur_pos = 0;
    while (temp != NULL && cur_pos < pos - 1) {
        temp = temp->next;
        cur_pos++;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    Node* del = temp->next;
    temp->next = temp->next->next;
    
    if (temp->next != NULL) {
        temp->next->prev = temp;
    }

    delete del;
}

    void pop_front(){
        if(head==NULL){
            cout<<"Doubly LinkedList is already empty\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"Doubly LinkedList is already empty\n";
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;

        delete temp;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }

        cout<<"NULL\n";
    }
};
int main(){
    DoublyLinkedList dll;
    dll.push_back(5);
    dll.push_back(4);
    dll.push_back(3);
    dll.push_back(2);
    dll.push_back(1);
    dll.pop_AnyPos(4);
    //dll.pop_back();
    dll.display();
    return 0;
}