#include<iostream>
#include<bits/stdc++.h>
#include<vector>
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
    Node* Middle(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

void print(Node* head){
    while(head != NULL){
        cout<<head->val<<"->";
        head = head->next;
    }

    cout<<"NULL\n";
}
int main(){
    LinkedList l1;
    l1.Head(5);
    l1.Tail(12);
    l1.Tail(21);
    l1.position(17,2);
    l1.display();
    //cout<<size(l1.head);
    Node* temp = l1.Middle();
    print(temp);
    return 0;
}