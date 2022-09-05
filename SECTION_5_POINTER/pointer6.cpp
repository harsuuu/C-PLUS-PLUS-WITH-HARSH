#include<iostream>
using namespace std;
int main(){
int A[5]={2,4,6,8,10};
int *p;
p=A;
for(int i=0;i<5;i++)
{
    cout<<*(A+i)<<endl;  // agr hm star(*) nhi lgayenge to ye hme address dega.
   
}
return 0;
}