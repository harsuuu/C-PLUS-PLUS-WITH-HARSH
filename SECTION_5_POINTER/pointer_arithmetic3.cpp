#include<iostream>
using namespace std;
int main(){
int A[5]={2,4,6,8,10};
int *p;
p=A;    //dono line ko eksath int *p=A aise bhi likh skte hai.
cout<<*p<<endl;
p=p+2;
cout<<*p<<endl;   // aise direct bhi print kra skte hai "cout<<*(p+2)<<endl;" 
return 0;
}