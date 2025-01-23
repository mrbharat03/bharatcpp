#include<iostream>
#include<bits/stdc++.h>
/*
    MEMBER FUNCTIONS
    size(),max_size(),empty(),clear(),find()
*/
using namespace std;

int main(){
    set<int> s;
    cout<<s.empty()<<endl;
    //Insertion in set
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    cout<<s.count(2)<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.size()<<endl;
    // traversal in set
    set<int>::iterator itr;
    for(itr = s.begin();itr !=s.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<s.rbegin()<<endl;
    // for(auto val : s){
    //     cout<<val<<" ";
    // }
    // deletion in set
    itr = s.begin();
    s.erase(++itr);
    for(itr = s.begin();itr !=s.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}