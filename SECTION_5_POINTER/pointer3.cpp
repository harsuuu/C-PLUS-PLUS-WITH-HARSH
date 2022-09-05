#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the number of element :";
cin>>size;
int A[size];           //This array created in stack and integer takes 4 bytes.
cout<<sizeof A<<endl;       

//NOTE--> Once an array is created within a program of some size then it can not be modified.(means size can not be modified, value modify ho skti hai) 
return 0;
}