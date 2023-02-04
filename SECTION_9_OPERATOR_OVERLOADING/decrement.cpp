#include<iostream>
using namespace std;
class Distance
{
private:
            int feet;
            int inch;
    
    public:
    Distance(int f , int i)
    {
        feet=f;
        inch=i;
    }

void operator -()
{
    feet=-feet;
    inch=-inch;

    cout<<feet<<" "<<inch;
}
};

int main()
{
    Distance d1(10,8);
    -d1;
    
    return 0;
}