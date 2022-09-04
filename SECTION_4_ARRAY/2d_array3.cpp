#include<iostream>
using namespace std;
int main(){
int A[2][3]={{1,2,3},{4,5,6}};
for(auto& x:A)        // yha x m aa jayegi A ki value 
{
    for(auto& y:x)     //now sari x ki value y m aa jayegi , ise yha lga bhi skte hai ya ht skte hai
    {
        cout<<y<<" ";
    }
    cout<<endl;
}
return 0;
}