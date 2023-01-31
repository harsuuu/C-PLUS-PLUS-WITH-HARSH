#include<iostream>
using namespace std;

int add(int x, int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
float add(float i ,float j)
{
    return i+j;
}

int main()
{
    int a=10,b=20,c,d;
    c=add(a,b);
    cout<<c<<endl;
    d=add(a,b,c);
    cout<<d<<endl;
    float l=1.2;
    float k=2.4;
    float m;
    m=add(l,k);
    cout<<m<<endl;

    return 0;

    

}