#include<iostream>

using namespace std;

class Parent{
public:
    string name;
};
class Child : public Parent{
public:
    int age;
    string college;
};
class Student : public Child{
public:
    string dept;
    string subject;
    double* marks;
    Student(string name,string dept,string subject,int age,double mark){
        cout<<"Hi I am a constructor\n";
        
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->age = age;
        marks = new double;
        *marks = mark;
        
    }
    Student(Student &s){
        cout<<"Hi I am a copy construtor\n";
        this->name = s.name;
        this->dept = s.dept;
        this->subject = s.subject;
        this->age = s.age;
        marks = new double;
        *marks = *s.marks;

    }
    ~Student(){
        cout<<"Hii I am a destructor\n";
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"dept : "<<dept<<endl;
        cout<<"subject : "<<subject<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"marks : "<<*marks<<endl;
    }
};

int main(){
    Student s1("Ambika Sharma","Medical","Biology",18,85.7);
    s1.getinfo();
    Student s2(s1);
    s2.name = "Anamika Rajput";
    *s2.marks = 81.2;
    s2.getinfo();
    return 0;
}