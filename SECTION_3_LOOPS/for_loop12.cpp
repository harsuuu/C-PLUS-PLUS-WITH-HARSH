#include<iostream>
using namespace std;
int main(){
int n,r;
cout<<"Enter the number which you want to reverse:"<<endl;
cin>>n;
while(n>0){
  r=n%10;
  n=n/10;
  cout<<r<<endl;
}

return 0;
}