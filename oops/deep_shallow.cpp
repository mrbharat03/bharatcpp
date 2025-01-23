#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;
    Student(string name,double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    Student(Student &s){
        this->name = s.name;
        cgpaptr = new double;
        *cgpaptr = *s.cgpaptr;
    }

    void getinfo(){
        cout<<name<<" "<<*cgpaptr<<endl;
    }
};
int main(){
    Student s1("ABC",9.8);
    Student s2(s1);
    //s1.getinfo();
    //*s1.cgpaptr = 9.2;
    s2.name = "XYZ";
    *s2.cgpaptr = 8.4;
    s2.getinfo();
    s1.getinfo();
    return 0;
}