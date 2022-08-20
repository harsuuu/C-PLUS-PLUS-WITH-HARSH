//Print 1 to n number of time "Hello"
#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter n";
cin>>n;
for(i=1;i<=n;i++)
{
    cout<<i <<":Hello"<<endl;
}
return 0;
}