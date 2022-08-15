#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Enter c"<<endl;
    cin>>c;
    cout<<"Root (r1) is "<<(-b+sqrt(b*b-4*a*c))/2*a<<endl;
    cout<<"Root (r2) is "<<(-b-sqrt(b*b-4*a*c))/2*a<<endl;
    return 0;
    

}