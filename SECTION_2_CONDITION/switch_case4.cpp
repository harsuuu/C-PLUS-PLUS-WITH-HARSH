#include<iostream>
using namespace std;
int main(){
cout<<"Menu\n";
cout<<"1. Add\n"<<"2. Sub\n"<<"3. Div\n"<<"4. Mul\n";

int option;
cout<<"Enter your option";
cin>>option;
int a,b,c;
cout<<"Enter the two number";
cin>>a>>b;
switch(option){
    case 1:c=a+b;
    cout<<c<<endl;
    break;
    case 2:c=a-b;
    cout<<c<<endl;
    break;
    case 3:c=a/b;
    cout<<c<<endl;
    break;
    case 4:c=a*b;
    cout<<c<<endl;
    break;
}
return 0;
}