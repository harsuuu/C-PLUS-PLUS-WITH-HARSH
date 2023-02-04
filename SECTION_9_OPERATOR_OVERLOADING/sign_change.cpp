#include<iostream>
using namespace std;

class Harsh
{
   private:
            int x;
            int y;
    public:
            Harsh(int a , int b)
            {
                x=a;
                y=b;
            }

            void operator -()
            {
                x=-x;
                y=-y;
                cout<<x<<y<<endl;
            }
            
};



int main()
{
    Harsh H(10,5);
    -H;
}