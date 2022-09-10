#include<iostream>
using namespace std;

int add (int x, int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
float add (float x ,float y)
{
    return x+y;
}
// jese ab agr hm dubara ek aur function likhna chahe "float add(float x , float y)"" to bilkul same nhi likh skte hai hme kuch change krna pdega parameter m brna ye glt ho jayega
int main(){
int a,b,c,d;
cout<<"Enter a and b :"<<endl;
cin>>a>>b;
c=add(a,b);
cout<<"sum of a and b is :"<<c<<endl;
d=add(a,b,c);
cout<<"sum of a,b and c is :"<<d<<endl;
float i,j,k;
cout<<"Enter i and j:"<<endl;
cin>>i>>j;
k=add(i,j);
cout<<"sum of i and j is:"<<k<<endl;
return 0;
}