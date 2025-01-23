#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void Head(int x){
        Node* new_node = new Node(x);
        new_node->next = head;
        head = new_node;
    }
    void Tail(int x){
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
        return;
    }

    void position(int x,int pos){
        if(pos == 0){
            Head(x);
            return;
        }
        Node* new_node = new Node(x);
        Node* temp = head;
        int cur_pos = 0;
        while(temp->next != NULL && cur_pos != pos - 1){
            temp = temp->next;
            cur_pos++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }

        cout<<"NULL\n";
    }
};

void reverse(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    while(currptr != NULL){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}
int main(){
    LinkedList l1;
    l1.Head(5);
    l1.Tail(12);
    l1.Tail(21);
    l1.position(17,2);
    l1.display();
    reverse(l1.head);
    l1.display();
    return 0;
}