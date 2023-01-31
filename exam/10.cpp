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
            friend void operator--(Harsh(&Ha)); 
};          

void operator--(Harsh(&Ha))
{
    Ha.x=--Ha.x;
    Ha.y=--Ha.y;


    cout<<Ha.x<<  Ha.y<<endl;

}


int main()
{
    Harsh H(20,22);
    --H;
}