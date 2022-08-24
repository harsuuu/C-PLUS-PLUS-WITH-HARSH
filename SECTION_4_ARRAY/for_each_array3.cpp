#include<iostream>
using namespace std;
int main(){
float A[5]={1.1,2.2,3.3,4.4,5.5};
int x;
for(float x:A)         //yha hum for(auto x:A ) ye bhi kr skte hai isse pta use automatically pta chl jayega which data type it is ?
    {
     cout<<x<<endl;
    }
return 0;
}