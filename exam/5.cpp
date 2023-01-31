#include<iostream>
using namespace std;

class Add
{
    private:
        int x;
        int y;
    public:
            Add(int a, int b)
            {
                x=a;
                y=b;
            }

           friend int adding (Add(&obj));

};

int adding (Add(&obj))
{
    return obj.x+obj.y;
}

int main()
{
    Add a(10,20);
    cout<<"Add is :"<<adding(a);
}
