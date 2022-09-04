#include<iostream>
using namespace std;
int main(){
int A[7]={5,6,4,3,7,8,9};
int i, sum=0;
for(i=0;i<7;i++)
{
  sum=sum+A[i];
}
cout<<"sum of Array "<<sum;
return 0;
}