#include<iostream>
using namespace std;
int main(){
int x=10;
int &y=x;
cout<<x<<endl;
x++;
y++;
cout<<y<<endl;
cout<<&x<<endl;
cout<<&y<<endl;   // dono x and y ka address  ka same hoga.
return 0;
}