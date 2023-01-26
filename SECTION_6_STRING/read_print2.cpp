#include<iostream>
using namespace std;
int main()
{
   char s[20];
   cout<<"Enter the name :";

   cin.get(s,20);
   // Or cin.getline(s,20);
   cout<<"Kya hal hai "<<s<<endl;
   return 0;
}