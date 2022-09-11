//Function template

#include<iostream>
using namespace std;
template<class T, class S>
T max(T x,S y)
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