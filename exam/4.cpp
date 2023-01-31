#include<iostream>
using namespace std;

class student
{
    private:
            int id;
            string name;
            int roll_no;
            int m1,m2,m3;

    public:
            void input();
            void display();

};

void student::input()
{
    cout<<"Enter id"<<"enter name"<<"enter roll name"<<"Enter m1,m2,m3"<<endl;
    cin>>id>>name>>roll_no>>m1>>m2>>m3;
}

void student::display()
{
    cout<<"id is :"<<id<<endl;
    cout<<"Name is :"<<name<<endl;
    cout<<"Roll is :"<<roll_no<<endl;
    cout<<"Marks in subject 1:"<<m1<<endl;
     cout<<"Marks in subject 2:"<<m2<<endl;
      cout<<"Marks in subject 3:"<<m3<<endl;
}

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}