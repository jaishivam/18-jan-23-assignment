#include <iostream>
using namespace std;
class arithematic
{
    public:
    int num1, num2, num3, num4, num5, num6, num7, num8;
    int add, sub, mul, divi;
};

int main()
{
    arithematic a;
    cout<<"Enter 1st number: ";
    cin>>a.num1;
    cout<<"Enter 2nd number: ";
    cin>>a.num2;
    cout<<"Enter 3rd number: ";
    cin>>a.num3;
    cout<<"Enter 4th number: ";
    cin>>a.num4;
    cout<<"Enter 5th number: ";
    cin>>a.num5;
    cout<<"Enter 6th number: ";
    cin>>a.num6;
    cout<<"Enter 7th number: ";
    cin>>a.num7;
    cout<<"Enter 8th number: ";
    cin>>a.num8;
    
    a.add=a.num1+a.num2;
    a.sub=a.num3-a.num4;
    a.mul=a.num5*a.num6;
    a.divi=a.num7/a.num8;
    
    cout<<"Addition: "<<a.add<<endl;
    cout<<"Subtraction: "<<a.sub<<endl;
    cout<<"Multiplication: "<<a.mul<<endl;
    cout<<"Division: "<<a.divi<<endl;
    return 0;
}
