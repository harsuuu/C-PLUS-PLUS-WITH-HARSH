#include<iostream>
using namespace std;
int main(){
int r,n,rev=0;
cout<<"Enter the number which you want to reverse";
cin>>n;
    while(n>0){
       r=n%10;
       n=n/10;
       rev=rev*10+r;
    }
cout<<"Reverse number is "<<rev;
return 0;
}