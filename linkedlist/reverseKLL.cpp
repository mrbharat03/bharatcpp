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
    void tail(int x){
        Node* new_node = new Node(x);
        Node* temp = head;
        while(temp->next != NULL) temp = temp->next;
        
        temp->next = new_node;
    }
    void AnyPos(int x,int pos){
        if(pos == 0){
            Head(x);
            return;
        }
        Node* new_node = new Node(x);
        Node* temp = head;
        int cur_pos = 0;
        while(temp->next != NULL && cur_pos != pos-1){
            cur_pos++;
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    void DelHead(){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void delTail(int pos){
        if(pos == 0){
            DelHead();
            return;
        }
        Node* temp = head;
        int cur_pos=0;
        while(temp->next != NULL && cur_pos != pos-1){
            cur_pos++;
            temp =temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }
        Node* prev = temp->next;
        temp->next = temp->next->next;
        delete prev;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
    void delAlternate(){
        Node* temp = head;
        while(temp != NULL && temp->next != NULL){
            Node* prev = temp->next;
            temp->next = temp->next->next;
            delete prev;
            temp= temp->next;
        }
    }
    void DelDupli(){
        Node* temp = head;
        int i=1;
        while(temp != NULL && temp->next != NULL){
            if(temp->val == temp->next->val){
                delTail(i);
            }
            else{
                temp = temp->next;
                i++;
            }
        }
    }
    void reverse(){
        Node* curr = head;
        Node* prev = NULL;
        while(curr != NULL){
            Node* nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }
        head = prev;
    }
};
void reverseKLL(Node* head,int k){
        Node* prev = NULL;
        Node* curr=head;
        int count =0;
        while(curr != NULL && count <k){
            Node* next = curr->next;
            curr->next = prev;
            prev=curr;
            curr= next;
            count++;
        }
        if(curr != NULL)
       Node* new_head = reverseKLL(curr,k);
    }
int main(){
    LinkedList l1;
    l1.Head(15);
    l1.tail(25);
    l1.tail(52);
    l1.AnyPos(21,1);
    l1.AnyPos(27,1);
    l1.AnyPos(95,1);
    l1.reverseKLL(2);
    l1.display();
    return 0;
}