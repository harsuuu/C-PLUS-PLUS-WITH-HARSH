#include<iostream>
using namespace std;
int main(){
int *p;
p= new int [5];
// in uper bali dono line ko hm aise bhi likh skte hai int *p=new int[5]
 
 p[0]=10;
 p[1]=16;
 p[2]=16;
 p[3]=14;
 p[4]=20;
 cout<<p[3]<<endl;
 cout<<p[4]<<endl;

 delete []p;

 //Note --> before delete []p , hm p=NULL nhi kr skte hai qki agr hm p assign NULL(p=NULL) krenge then the pointer will no more to be pointing on this dynamic memory.  Means phle hme delete []p krna hoga uske bad p=NULL(p=nullptr; -->aise likhenge ) kr skrte hai agr krna chahe to.
return 0;
}