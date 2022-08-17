#include<iostream>
using namespace std;
int main(){
int day;
cout<<"Enter the day Number";
cin>>day;
switch(day)
{
    case 1: cout<<"monday";
    break;
    case 2: cout<<"tuesday";
    break;
    case 3: cout<<"wednesday";
    break;
    case 4: cout<<"thrusday";
    break;
    case 5: cout<<"friday";
    break;
    case 6: cout<<"sunday";
    break;
    default : cout<<"Saturay";
}
return 0;
}