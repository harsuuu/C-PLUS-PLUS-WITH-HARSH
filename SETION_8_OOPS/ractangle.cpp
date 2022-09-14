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
    Ractangle r1, r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area of ractangle of r1 is :"<<r1.area()<<endl;
    cout<<"Area of perimeter of r1 is :"<<r1.perimeter()<<endl;
    r2.length=15;
    r2.breadth=10;
     cout<<"Area of ractangle of r2 is :"<<r2.area()<<endl;
    cout<<"Area of perimeter of r2 is :"<<r2.perimeter()<<endl;
    return 0;
}