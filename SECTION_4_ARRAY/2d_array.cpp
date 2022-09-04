#include<iostream>
using namespace std;
int main(){
int A[2][3]={{1,2,3},{4,5,6}};
for(int i=0;i<2;i++)         // for accessing row
{
    for(int j=0;j<3;j++)     // for accessing column
    {
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}