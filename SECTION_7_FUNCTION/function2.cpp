#include<iostream>
using namespace std;

int maximum (int x , int y, int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>z)
    {
        return y;
    }
    else{
        return z;
    }
}
int main(){
    int a,b,c,r;
cout<<"Enter three value --> a,b &c :"<<endl;
cin>>a>>b>>c;
r= maximum(a,b,c);
cout<<"maximum value is:"<<r<<endl;
return 0;
}