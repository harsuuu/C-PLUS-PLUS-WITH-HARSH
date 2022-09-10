#include<iostream>
using namespace std;

float add(int x , int y)
{
       int z;
       z=x+y;
       return z;
}

int main(){
float a=2.5,b=3.6,c;
c=add(a,b);
cout<<c<<endl;
return 0;
}