#include<iostream>
using namespace std;
class Ractangle{
    public:
    int length;
    int breadth;      //data member

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }                          //function

};
int main(){
    Ractangle *p;
    p=new Ractangle;                            //aise bnayenge jb heap m bnana hoga.
    p->length=10;
    p->breadth=5;    
    cout<<"Area of ractangle of r1 is :"<<p->area()<<endl;
    cout<<"Area of perimeter of r1 is :"<<p->perimeter()<<endl;

    Ractangle *q=new Ractangle();                //ek line m ye bhi tareeka hai.

    q->length=15;
    q->breadth=10;
    cout<<"Area of ractangle of r1 is :"<<q->area()<<endl;
    cout<<"Area of perimeter of r1 is :"<<q->perimeter()<<endl;
    return 0;

}