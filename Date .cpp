#include<iostream>
using namespace std;
class Date
{
private:
    int D,M,Y;
public:
    Date()
    {
        cout<<"called Default contructor "<<endl;
        D=0;
        M=0;
        Y=0;
    }
    Date(int x,int u,int z)
    {
        cout<<"Constructor called"<<endl;
        D=x;
        M=u;
        Y=z;
    }
    void setDate(int x,int u,int z)
    {
        D=x;
        M=u;
        Y=z;
    }
   void showDate()

   {
       cout<<D<<"/"<<M<<"/"<<Y<<endl;
   }

};
int main()
{
    Date d1;
    Date d2(4,6,2012);
    d1.setDate(6,4,2020);
    d1.showDate();
    d2.showDate();
    return 0;
}
