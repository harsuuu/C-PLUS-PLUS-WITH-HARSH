#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a and b :";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
           c=a/b;
           cout<<"Division is :"<<c<<endl; 
        }
        else    //(b==0) --> means error means exception.
        {
            throw(b);
        }
    }
    catch(int e)    //ab throw bala iss "e" m aa jayega
    {
        cout<<"division is(which is error) :"<<e<<endl;
    }

    return 0;
    
}