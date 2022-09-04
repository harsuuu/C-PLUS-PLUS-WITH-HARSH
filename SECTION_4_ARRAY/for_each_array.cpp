#include<iostream>
using namespace std;
int main(){
int A[5]={1,2,4,3,7};
int x;
for(int& x:A)    //&--> reference k liye hai reference means nick name 
    {
     cout<<x<<endl;
    }
return 0;
}