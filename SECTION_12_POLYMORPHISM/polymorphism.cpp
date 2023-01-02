#include<iostream>
using namespace std;

class Car
{
    public:
        virtual  void start()
            {
                cout<<"Car is start"<<endl;
            }
        virtual   void stop()
            {
                cout<<"Car is stop"<<endl;
            }
};

class swift: public Car
{
    public:
            void start()
            {
                cout<<"Swwift is start"<<endl;
            }
            void stop()
            {
                cout<<"Swift is stop"<<endl;
            }
};

class scorpio: public Car
{
    public:
            void start()
            {
                cout<<"Scorpio has start"<<endl;
            }
            void stop()
            {
                cout<<"Scorpio has stop"<<endl;
            }

};

int main()
{
    Car *ptr= new swift();
    ptr->start();
    ptr->stop();
    ptr=new scorpio();
    ptr->start();
    ptr->stop();
    return 0;
}