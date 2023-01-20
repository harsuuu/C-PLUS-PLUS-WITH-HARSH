#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile("my.txt",ios::app);
    outfile<<"Nhi soya na abhi tak sale soja"<<endl;

    outfile.close();

}