#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x2,x1,y2,y1;
    cout<<"Enter 4 number"<<endl;
    cin>>x2>>x1>>y2>>y1;
    cout<<"distance is"<<sqrt(x2*x2-x1*x1)+(y2*y2-y1*y1)<<endl;
    return 0;
}