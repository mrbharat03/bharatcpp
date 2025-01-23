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
int main(){
    Node* n = new Node(25);

    cout<<n->val<<endl<<n->next<<endl;
    return 0;
}