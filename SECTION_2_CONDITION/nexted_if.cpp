#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter a,b,c"<<endl;
cin>>a>>b>>c;
if(a>b && a>c)
{
    cout<<"a is greatest";
}
else
{
    if(b>c)
    {
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
}
return 0;
}