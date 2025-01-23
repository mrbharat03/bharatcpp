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

void InsertAtHead(int x,Node* &head){
    Node* new_node = new Node(x);
    new_node->next = head;
    head = new_node;
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
    InsertAtHead(25,head);
    display(head);
    InsertAtHead(15,head);
    display(head);
    InsertAtHead(55,head);
    display(head);
    return 0;
}