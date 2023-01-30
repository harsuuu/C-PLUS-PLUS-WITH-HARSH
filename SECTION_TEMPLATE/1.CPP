#include<iostream>
using namespace std;

template<class T>T add(T a, T b)
{
    T result =a+b;
    return result;
}

int main()
{
    int i=2;
    int j=6;
    float m=2.3;
    float n=3.4;
    cout<<add(i,j)<<endl;
    cout<<add(m,n);

    return 0;
}