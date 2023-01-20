#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("my.txt");
    outfile<<"Hi, Harsh here"<<endl;
    outfile<<"Soja bhaii"<<endl;

    outfile.close();
}