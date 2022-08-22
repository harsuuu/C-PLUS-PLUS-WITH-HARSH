#include<iostream>
using namespace std;
int main(){
int i,n,fact=1;
cout<<"Enter n:";
cin>>n;
for(i=1;i<=n;i++)
{
    fact=fact*i; 
    //fact*=i;   (ye bhi likh skte hai uper bale ko)
}
cout<<fact<<endl;
return 0;
} 