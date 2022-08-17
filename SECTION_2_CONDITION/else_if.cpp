#include<iostream>
using namespace std;
int main(){
int day;
cout<<"Enter the day number"<<endl;
cin>>day;
if(day==1) 
{
    cout<<"Day is Sunday";
}
else if(day ==2)
{
    cout<<"Day is Monday";
}
else if(day==3)
{
    cout<<"Day is tuesday";
}
else if(day==4)
{
    cout<<"Day is Wednesday";
}
else if(day==5)
{
    cout<<"Day is Thrusday";
}
else if(day==6)
{
    cout<<"day is Friday";
}
else if(day ==7)
{
        cout<<"SATURDAY";
}
else{
    cout<<"invalid Number";
}
return 0;
}