#include<iostream>

using namespace std;

class Teacher{
    double salary;
public:
    string name;
    string dept;
    string sub;
};
class Student : public Teacher{
public:
    int age;
    Student(string name,string dept,string sub,int age){
        cout<<"Hi I am a constructor\n";
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->age = age;
    }

    ~Student(){
        cout<<"Hi I am a destructor\n";
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"dept : "<<dept<<endl;
        cout<<"sub : "<<sub<<endl;
        cout<<"age : "<<age<<endl;
    }
};

int main(){
    Student s1("Ambika Sharma","Medical","Biology",18);

    s1.getinfo();
    cout<<"Main function is now ended\n";
    return 0;
}