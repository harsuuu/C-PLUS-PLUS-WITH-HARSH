#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter the age"<<endl;
cin>>age;
if(age<12 || age>45)
{
    cout<<"They is eligible";
}
else
{
    cout<<"Not eligible";
}
return 0;
}