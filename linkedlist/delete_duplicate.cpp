#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};
void H(Node* &head,int x){
    Node* new_node = new Node(x);
    new_node->next = head;
    head = new_node;
}
void T(Node* &head,int x){
    Node* new_node = new Node(x);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void P(Node* &head,int x,int pos){
    if(pos == 0){
        H(head,x);
        return;
    }
    Node* new_node = new Node(x);
    int cur_pos = 0;
    Node* temp = head;
    while(temp != NULL && cur_pos != pos - 1){
        temp = temp->next;
        cur_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void delHead(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
}
void delPos(Node* &head,int pos){
    if(pos == 0){
        delHead(head);
        return;
    }
    Node* temp = head;
    int cur_pos = 0;
    while(temp->next != NULL && cur_pos != pos - 1){
        temp = temp->next;
        cur_pos++;
    }
    Node* prev = temp->next;
    temp->next = temp->next->next;
    delete prev;
    return;
}
void update(Node* &head,int x,int pos){
    Node* temp = head;
    int cur_pos = 0;
    while(temp != NULL && cur_pos != pos){
        cur_pos++;
        temp = temp->next;
    }

    temp->val = x;
}

void display(Node* head){
    while(head != NULL){
        cout<<head->val<<"->";
        head = head->next;
    }

    cout<<"NULL\n";
    return;
}
int main(){
    Node* head = NULL;
    H(head,9);
    T(head,25);
    T(head,35);
    T(head,52);
    P(head,47,2);
    H(head,9);
    H(head,3);
    Node* temp = head;
    int i = 1;
    display(head);
    while(temp != NULL && temp->next != NULL){
        if(temp->val == temp->next->val){
            delPos(head, i);
        }
        else{
        temp = temp->next;
        i++;
        }
    }

    
    display(head);
    return 0;
}