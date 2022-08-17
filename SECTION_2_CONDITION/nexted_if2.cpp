#include<iostream>
#include<math.h>
using namespace std;
int main(){
float a,b,c,d,r1,r2;

cout<<"Enter a,b and c"<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d==0)
{
    cout<<"roots are real and equal"<<(-b/(2*a))<<endl;
}
else
{
    if(d>0)
    {
        cout<<"roots are real and unequal"<<(-b+sqrt(d))/(2*a)<<endl;
        cout<<"roots are real and unequal"<<(-b-sqrt(d))/(2*a)<<endl;
    }
    else
    {
        cout<<"roots is imaginary"<<endl;
    }
}
return 0;
}