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
    Ractangle r;
    Ractangle *p;                        //ye stack m hi bnega.
    p=&r;
    p->length=10;
    p->breadth=5;
    cout<<"Area of ractangle of r1 is :"<<p->area()<<endl;
    cout<<"Area of perimeter of r1 is :"<<p->perimeter()<<endl;
    return 0;
}