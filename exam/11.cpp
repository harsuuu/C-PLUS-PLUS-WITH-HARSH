#include<iostream>
using namespace std;

class A
{
    public:
            int x;
            void show()
            {
                cout<<x;
            }
};
class B: public A
{
    public:
            int y;
            void show()
            {
                cout<<x<<y<<endl;
            }
};

int main()
{
    B bb;
    bb.x=10;
    bb.y=25;
    bb.show();
}