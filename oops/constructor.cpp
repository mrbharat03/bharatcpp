#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Teacher{
    double salary;
public:
// default constructor
    Teacher(){
        cout<<"Hii, I am a default constructor\n";
        dept = "Computer Science";
    }
//copy constructor
    Teacher(Teacher &t){
        cout<<"Hii, I am a copy constructor\n";
        this->name = t.name;
        this->dept = t.dept;
        this->sub = t.sub;
        this->salary = t.salary;
    }
// parameterized constructor
    Teacher(string name,string sub,double salary,string dept){
        cout<<"Hii, I am a parametrised constructor\n";
        this->name = name;
        this->sub = sub;
        this->salary = salary;
        this->dept = dept;
    }
    string name;
    string dept;
    string sub;

    void getinfo(){
        cout<<name<<" "<<dept<<" "<<sub<<" "<<salary<<endl;
    }
};

int main(){
    Teacher t1("ABC","C++",25000,"CSE");
    Teacher t2(t1);
    //t1.getinfo();
    t2.getinfo();
    return 0;
}