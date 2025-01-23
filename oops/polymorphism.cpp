#include<iostream>

using namespace std;

class Student{
public:
    string name;
    int age;
    Student(){
        cout<<"Hi i am a default constructor\n";
    }
    Student(string name,int age){
        cout<<"Hii I am a parameterized constructor\n";
        this->name = name;
        this->age = age;
    }
    ~Student(){
        cout<<"Hii I am a destructor\n";
    }

};

int main(){
    Student s1("Abc",24);
    return 0;
}