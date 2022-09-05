#include<iostream>
using namespace std;
int main(){
int A[5]={2,4,6,8,10};
int *p;
p=A;
for(int i=0;i<5;i++)
{
    cout<<*(p+i)<<endl;  // agr hm star(*) nhi lgayenge to ye hme address dega.
}
 // agr hm cout<<p[i]; use krenge to ye hme same output dega.
for(int i=0;i<5;i++)
{
    cout<<p[i]<<endl;
}
return 0;
}