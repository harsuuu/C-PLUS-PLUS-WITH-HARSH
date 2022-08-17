#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,total;
float avg;
cout<<"Enter the marks f three subject"<<endl;
cin>>m1>>m2>>m3;
total=m1+m2+m3;
avg=total/3.0;
if(avg>=60)
{
    cout<<"best";
}
else
{
    if(avg>=35 and avg<=60)
    {
        cout<<"Good";
    }
    else{
        cout<<"fail";
    }
}
return 0;
}