#include<iostream>
using namespace std;

int add (int x, int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
float add (float x ,float y)
{
    return x+y;
}
int main(){
int a=10,b=20,c,d;
c=add(a,b);
cout<<c<<endl;
d=add(a,b,c);
cout<<d<<endl;
int i=2.33f,j=4.55f,k;
k=add(i,j);
cout<<k<<endl;
return 0;
}