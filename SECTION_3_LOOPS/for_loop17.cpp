#include<iostream>
using namespace std;
int main(){
int r,num,n,rev=0;
cout<<"Enter the number which you want to reverse:";
cin>>num;
n=num;
    while(num>0){
       r=num%10;
       num=num/10;
       rev=rev*10+r;
    }
if(n==rev)
{
    cout<<"This number is palindrome";
}
else{
    cout<<"This is not palindrome";
}
return 0;
}