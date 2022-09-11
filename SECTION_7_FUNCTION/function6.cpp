//Function Overloading 

#include<iostream>
using namespace std;

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
float max(float x,float y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
int main(){
int c=max(10,5);
cout<<c<<endl;
float d=max(2.3,5.3);
cout<<d<<endl;
return 0;
}