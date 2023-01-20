#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public:
        string name;
        int roll_no;
        string branch;
};

int main()
{
    Student s;
    s.name="Harsh";
    s.roll_no=32;
    s.branch="CST with AI & ML";

    ofstream outfile("student.txt");
    outfile<<s.name<<endl;
    outfile<<s.roll_no<<endl;
    outfile<<s.branch<<endl;

    outfile.close();
}