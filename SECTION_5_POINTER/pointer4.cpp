#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the number of element :";
cin>>size;

int *p= new int[size];       //it will created in heap.

//initially iska size bhi hoga jo hmne dala hai uper se "lekin" agr hm iss size ko modify krna chahta hai to kr skte hai.
//NOTE-->Before changing poiter p (means before modifinf the size) se phle hme phle bala delete bhi krna hota hai, delete k bad new bna skta hai.
delete []p;
// agr delete []p nhi krenge to memory leak hogi.
cout<<"Enter new size :";     //modify the size of array.    
cin>>size;
p=new int[size];
return 0;
}
