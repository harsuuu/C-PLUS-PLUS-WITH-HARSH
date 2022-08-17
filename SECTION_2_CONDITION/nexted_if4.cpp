#include<iostream>
using namespace std;
int main(){
int amount;
cout<<"Enter the ammount"<<endl;
cin>>amount;
if(amount>=5000)
{
    cout<<"You will get 20% discount";
}
else
{
    if(amount>=2000 && amount<5000)
    {
        cout<<"You will get 10% discount";

    }
    else{
        cout<<"You wil get 5% discunt";
    }
}
return 0;
}