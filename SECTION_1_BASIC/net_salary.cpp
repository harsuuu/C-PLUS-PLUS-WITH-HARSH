#include<iostream>
using namespace std;
int main()
{
    int basic_salary;
    int POA;
    int POD;
    int Net_salary;
    cout<<"Enter the basic salary"<<endl;
    cin>>basic_salary;
    cout<<"Enter the Percentage of allowances"<<endl;
    cin>>POA;
    cout<<"Enter the Percentage of Deductions"<<endl;
    cin>>POD;
    Net_salary= basic_salary + basic_salary*POA/100-basic_salary*POD/100;
    cout<<"Net salary is "<<Net_salary<<endl;
    return 0;

}