#include<iostream>
using namespace std;
class Harsh
{
    public:
    int a;
    int b;
    Harsh (int A , int B)
    {
     a=A;
     b=B;
    }

    void operator ++()
    {
        a=++a;
    
        b=++b;

        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){

Harsh H(10,5);
++H;

return 0;
}