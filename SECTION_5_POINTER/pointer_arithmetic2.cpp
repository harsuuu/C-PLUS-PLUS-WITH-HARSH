#include<iostream>
using namespace std;
int main(){
int A[5]={2,4,6,8,10};
int *p;
p=A;    //dono line ko eksath int *p=A aise bhi likh skte hai.
cout<<*p<<endl;   
p++;     
cout<<*p<<endl;
p--;
cout<<*p<<endl;
return 0;
}