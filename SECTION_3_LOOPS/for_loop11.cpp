#include<iostream>
using namespace std;
int main(){
int n,i,count=0;
cout<<"Enter the num:";
cin>>n;
for(i=1;i<=n;i++)
{
    if(n%i==0){
    count++;
    }
}
if(count==2)
{
    cout<<"It is prime number";
}
else
{
    cout<<"It is not prime number";
}
return 0;
}