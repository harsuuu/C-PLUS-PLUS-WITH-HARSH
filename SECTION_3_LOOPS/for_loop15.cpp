#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter two number";
cin>>m>>n;
while(m!=n)
{
    if(m>n)
    {
        m=m-n;
    }
    else if(n>m)
    {
        n=n-m;
    }
}
cout<<" GCD is "<<m<<endl;
return 0;
}
