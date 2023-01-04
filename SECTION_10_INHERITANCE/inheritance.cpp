#include<iostream>
using namespace std;

class Base
{
    public:
            int x;
    
    void show()
    {
        cout<<"Value of x in Base :"<<x<<endl;
    }
};

class Derived: public Base
{
    public:
            int y;
            
    void display()
    {
        cout<<"Value of Derived Class:"<<x<<"and"<<y<<endl;
    }
};


int main()
{
    Base b;
    cout<<"Enter the value of x"<<endl;
    cin>>b.x;

    b.show();

    Derived d;
    cout<<"Enter the value of x"<<endl;
    cout<<"Enter the value of y"<<endl;
    cin>>d.x;
    cin>>d.y;

    d.display();
}