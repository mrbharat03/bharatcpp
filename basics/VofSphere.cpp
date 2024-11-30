#include<iostream>
using namespace std;
int main()
{
    float radius;
    cout<<"Enter the radius of sphere ";
    cin>>radius;
    float volume = 3*3.14*radius*radius*radius/4;
    cout<<"the volume of sphere is "<<volume;
    return 0;
}