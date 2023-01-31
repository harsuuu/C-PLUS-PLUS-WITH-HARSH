#include<iostream>
using namespace std;

class Complex
{
    public:
            int real;
            int img;

    
            Complex operator+(Complex x)
            {
                Complex temp;
                temp.img=img+x.img;
                temp.real=real+x.real;

                return temp;
            }
};

int main()
{
    Complex c1,c2,c3;

    c1.img=10;
    c1.real=20;
    c2.img=20;
    c2.real=20;
    c3=c1+c2;

    cout<<c3.real<<"+i"<<c3.img<<endl;
    
    
}