//With operator_overloading
#include<iostream>
using namespace std;

class complex
{
    public:
            int real;
            int img;

   
    complex operator+(complex x)
    {
     complex temp;
     temp.img=img+x.img;
     temp.real=real+x.real;

     return temp;
    }

};
int main(){
complex c1,c2,c3;
c1.real=10;c1.img=5;

c2.real=5;c2.img=10;

c3=c1+c2;
//c3=c1.operator+(c2)
cout<<"Add of two complex Number:"<<c3.real<<"+i"<<c3.img<<endl;
return 0;
}
