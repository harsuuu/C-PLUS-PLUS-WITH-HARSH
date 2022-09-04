#include<iostream>
using namespace std;
int main(){
int A[]={1,3,4,5,3,6,4};
int i, max=1;    // just assume first elemt is max then start 
for(i=0;i<7;i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
}
cout<<"Largest number of this array is "<<max<<endl;
return 0;
}