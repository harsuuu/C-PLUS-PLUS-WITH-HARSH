#include<iostream>
using namespace std;
int main(){
int A[10]={1,5,6,7,8,9,11,16,17,18};
int l=0,h=9,mid,key;
cout<<"Enter key: ";
cin>>key;
while(l<=h)
{
    mid=(l+h)/2;
    if(key==A[mid])
    {    
    cout<<"Found key at: "<<mid;
    
     }
    else if(key<A[mid])
    {
        h=mid-1;
    }
    else{
       l=mid+1;
    }
}
cout<<"Not found";    //agr is array nhi hua to not found print krega

return 0;
}