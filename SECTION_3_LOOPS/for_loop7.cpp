#include<iostream>
using namespace std;
int main(){
int n,i;
int sum=0;
cout<<"Enter n:";
cin>>n;
for(i=1;i<=n;i++){
      sum=sum+i;      
      //sum+=i;       (same cheej hoti hai)
}
cout<<sum;
return 0;
}
