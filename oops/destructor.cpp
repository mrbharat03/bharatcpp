#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

class Student{
public:
    string name;
    int age;
    Student(){
        cout<<"Hi I am a constructor\n";
    }
    ~Student(){
        cout<<"Hi I am a destructor\n";   //delete cgpaptr;
    }
};

int main(){
    Student s1;

    return 0;
}