#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;      //data member
    public:
    int setLength(int l)
    {
        length=l;
    }
    int setBreadth(int b)
    {
        breadth=b;
    }
    int getLenth()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter();
};

    int Rectangle::perimeter()        //scope resolution
    {
        return 2*(length+breadth);
    }                          

int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<"Area of rectangle of r is :"<<r.area()<<endl;
    cout<<"perimeter of rectangle of r is :"<<r.perimeter()<<endl;
 
    return 0;
}