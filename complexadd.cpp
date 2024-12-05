#include<iostream>
using namespace std;
class complex{
    public:
    float imaginary=0;
    float real=0;
    
    complex()
    {
        real=0;
        imaginary=0;
    }
    void input()
    {
        cout<<"enter the real part"<<endl;
        cin>>real;
        cout<<"enter the imaginary part"<<endl;
        cin>>imaginary;
         display();
    }
    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        
    }
    friend complex operator +(complex &a,complex&b);
};

complex operator +(complex &a,complex &b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imaginary=a.imaginary+b.imaginary;
    cout<<temp.real<<"+"<<temp.imaginary<<"i";
    return temp;
}

int main()
{
    complex num1, num2 , num3;
    num1.input();
    num2.input();
    num3=num1+num2;
    
}

