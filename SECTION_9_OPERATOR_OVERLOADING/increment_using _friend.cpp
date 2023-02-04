#include<iostream>
using namespace std;
class Distance
{
    public: 
            int feet;
            int inch;
    
    
    Distance(int f , int i)
    {
        feet=f;
        inch=i;
    }
  friend void operator++(Distance &D);
};
void operator++(Distance &D)
{
    D.feet=++D.feet;
    D.inch=++D.inch;

    cout<<D.feet<<" "<<D.inch;
}


int main()
{
    Distance d1(10,8);
    ++d1;
    
    return 0;
}