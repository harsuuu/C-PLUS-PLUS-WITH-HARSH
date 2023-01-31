#include<iostream>
using namespace std;

class Harsh
{
    int x;
    int y;

    public:
            Harsh(int a , int b)
            {
                x=a;
                y=b;
            }

            void operator --()
            {
                x=--x;
                y=--y;
                cout<<x<<endl<<y<<endl;
            }
};


int main()
{
    Harsh H(20,22);
    --H;
}