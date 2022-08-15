#include<iostream>
using namespace std;
enum day{mon,tue,wed,thu=10,fri,sat,sun};
int main()
{

   day d;
   d=mon;
   cout<<d<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
return 0;
}


//ye by default 0 se start hota hai