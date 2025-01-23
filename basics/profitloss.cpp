#include<iostream>
using namespace std;
int main()
{
    int base_price,selling_price;
    cout<<"Enter the cost price of a product ";
    cin>>base_price;
    cout<<"Enter the selling price of a product  ";
    cin>>selling_price;
    if(selling_price>base_price)
    {
    cout<<"Profit of "<<selling_price-base_price;
    }
    else
    {
    cout<<"loss of "<<base_price-selling_price;
    }
    return 0;
}