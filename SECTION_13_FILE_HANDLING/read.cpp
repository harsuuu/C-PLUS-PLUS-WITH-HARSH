#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream infile;
    infile.open("1.txt");


    string str;
    int x;

    infile>>str;
    infile>>x;

    cout<<str<<endl;
    cout<<x<<endl;

    if(infile.eof())
    {
        cout<<"End of file is reached";
    }

    infile.close();
}