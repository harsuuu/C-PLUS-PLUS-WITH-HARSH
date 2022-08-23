#include<iostream>
using namespace std;
int main(){
int m,n,r,sum=0;
cout<<"Enter the number:"<<endl;
cin>>n;\
m=n;
while(n>0){
  r=n%10;
  n=n/10;
  sum=sum+ r*r*r;
}
if(sum==m)
{
    cout<<"Number is Armstrong";
}
else{
    cout<<"Number is not Armstrong";
}
return 0;
}