#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};

void InsertAtHead(Node* &head,int x){
    Node* new_node = new Node(x);
    new_node->next = head;
    head = new_node;
}

void InsertAtTail(Node* &head,int x){
    Node* new_node = new Node(x);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = new_node;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    InsertAtHead(head,25);
    InsertAtTail(head,15);
    InsertAtTail(head,94);
    display(head);
    return 0;
}