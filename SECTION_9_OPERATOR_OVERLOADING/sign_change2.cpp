#include<iostream>
using namespace std;
class Distance
{
    private:
            int feet;
            int inch;
    public:
            Distance(int f, int i)
            {
                feet=f;
                inch=i;
            }

            void operator -()
            {
                feet=-feet;
                inch=-inch;

                cout<<feet<<inch<<endl;
            }
};
int main()
{
    Distance d(10,2);
    -d;

    return 0;
}