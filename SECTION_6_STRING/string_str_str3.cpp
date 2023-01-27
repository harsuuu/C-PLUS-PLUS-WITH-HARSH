#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="programming"; 
    char s2[10]="kite";

    if(strstr(s1,s2)!=NULL)
    cout<<strstr(s1,s2)<<endl;
    else
    cout<<"Not found";
    
}
