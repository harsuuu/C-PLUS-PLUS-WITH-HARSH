#include<iostream>
using namespace std;
class A
{
    public:
        void message()
        {
            cout<<"Happy New Year 2023"<<endl;
        }
};

class B : public A
{
    public:
            void display()
            {
                cout<<"I am inside in class B"<<endl;
            }
};

class C : public A
{
    public:
            void show()
            {
                cout<<"I am inside in class C"<<endl;
            }
};

class D: public C, public B{
    public:
            void print()
            {
                cout<<"HI , I am inside in Class D";
            }
};

int main()
{
   D dd;
   dd.display();
   dd.print();
   dd.show();

    return 0;
}