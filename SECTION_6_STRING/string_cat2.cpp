#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[10]="Hey";
    char s2[10]="Harshu";

    strncat(s1,s2,4);

    cout<<s1<<endl;
}
