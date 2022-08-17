#include<iostream>
using namespace std;
int main(){
int year;
cout<<"enter ther year";
cin>>year;
if(year%4==0)
{
    if(year%100==0)
    {
        if(year%400==0)
        {
        cout<<"it is leap year";
        }
        else
        {
        cout<<"it is not leap year";
        }
    }
}
return 0;
}