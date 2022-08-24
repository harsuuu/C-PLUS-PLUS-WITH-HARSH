#include<iostream>
using namespace std;
int main(){
int A[5]={3,4,2,6,9};

for(int x:A)     // yha int ki jgah auto bhi lga skta hai
    {
     cout<<++x<<endl;     //original value will not change because x is getting copy of that value.
    }
return 0;
}