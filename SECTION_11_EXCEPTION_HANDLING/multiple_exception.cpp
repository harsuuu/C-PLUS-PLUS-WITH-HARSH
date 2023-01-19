#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    try 
    {
        if(x==0)
        {
            throw(x);
        }
        if(x=10)
        {
            throw('a');   
        }
        if(x=100)
        {
            throw(1.2);
        }
    }
    catch(int e)
    {
        cout<<"value of x is:"<<e<<endl;
    }
    catch(char y)
    {
        cout<<"Value of x is:"<<y<<endl;
    }
    catch(float z)
    {
        cout<<"alue of x is:"<<z<<endl;
    }
    return 0;
}