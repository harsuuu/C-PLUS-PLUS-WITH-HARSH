#include<iostream>
using namespace std;
int main(){
int A[5], sum=0,n,avg;
cout<<"Enter, how many number of element in this array"<<endl;
cin>>n;
cout<<"Enter the number of element"<<endl;
for(int i=0;i<5;i++)
{
   cin>>A[i];         //accessing all the element by for loop
}
for(int i=0;i<5;i++)
{
    sum=sum+A[i];
}

 avg=sum/n;
 cout<<"Avg of all element:"<<avg<<endl;
}