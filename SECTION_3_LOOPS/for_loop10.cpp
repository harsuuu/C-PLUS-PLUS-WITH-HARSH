#include<iostream>
using namespace std;
int main(){
int i,n,sum=0;
cout<<"Enter n:";
cin>>n;
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        sum=sum+i;
    }
}
if(2*n==sum)
{
    cout<<"It is perfect Number"<<endl;
}
else{
    cout<<"It is not perfect Number"<<endl;
}
return 0;
}