#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Teacher{
    double salary;
public:
    int age;
    string name;
    string dept;
    void changedept(string newdept){
        dept = "xyz";
    }
    void setsalary(double s){       // getter
        salary = s;
    }
    void getsalary(){               //setter
        cout<<salary;
    }

};
int main(){
    Teacher s1;
    s1.name = "ABC";
    s1.age = 28;
    s1.dept = "XYZ";
    s1.setsalary(250585.24);
    s1.getsalary();
    return 0;
}