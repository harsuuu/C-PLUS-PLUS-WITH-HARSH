#include<iostream>
using namespace std;

class Rect
{
public:
        int length;
        int breadth;

        int area();
};


int Rect::area()
{
    return length*breadth;
}



int main()
{
    Rect r;
    r.length=4;
    r.breadth=20;
    cout<<"arae :"<<r.area();

}