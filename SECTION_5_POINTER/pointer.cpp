#include<iostream>
using namespace std;
int main(){
int a=10;
int *p;
p=&a;   // in dono line ko ek sath aise bhi likh skte hai hm aise bhi likh skte hai " int *p=&a;"
cout<<a<<endl;
cout<<&a<<endl;
cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;        //dereferencing 
return 0;
}