#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter the age"<<endl;
cin>>age;
if(age>=12 && age<=45)
{
    cout<<"young";
}
else
{
    cout<<"Not young";
}
return 0;
}