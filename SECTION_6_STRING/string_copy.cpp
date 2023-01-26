#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[10]="Hey"; //source
    char s2[10]="";  //destination

    strcpy(s2,s1);

    cout<<s2<<endl;
}
