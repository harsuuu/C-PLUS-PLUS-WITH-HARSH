#include<iostream>
using namespace std;
int main(){
int A[5],n=5,i,key;
cout<<"Enter the element of an array:";
for(i=0;i<5;i++)
{
    cin>>A[i];          //yha hmne for loop lgakr read kr liye sare element
}
cout<<"enter the key: ";   // enter the element which you want to search
cin>>key;             // key means element of array
for(i=0;i<n;i++)
{
       if(A[i]==key)
       {
        cout<<"index of key is: "<<i<<endl;
       }
}
cout<<"Key is found"<<endl;   // ye jb print hoga jb hm element dalenge jo array m hoga hi nhi
return 0;
}