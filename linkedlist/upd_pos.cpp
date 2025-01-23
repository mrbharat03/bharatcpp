#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void Head(Node* &head,int x){
    Node* new_node = new Node(x);
    new_node->next = head;
    head = new_node;
}

void Tail(Node* &head,int x){
    Node* new_node = new Node(x);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void Position(Node* &head,int x,int pos){
    Node* new_node = new Node(x);
    if(pos == 0){
        Head(head,x);
        return;
    }

    Node* temp = head;
    int cur_pos = 0;
    while(cur_pos != pos-1){
        temp = temp->next;
        cur_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void update(Node* &head,int x,int pos){
    Node* temp = head;
    int cur_pos = 0;
    while(cur_pos != pos){
        temp = temp->next;
        cur_pos++;
    }
    temp->val = x;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }

    cout<<"NULL\n";
}
int main(){
    Node* head = NULL;
    Head(head,25);
    Tail(head,15);
    Tail(head,94);
    Position(head,55,2);
    update(head,100,2);
    display(head);
    return 0;
}