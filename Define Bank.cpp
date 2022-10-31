#include<iostream>
using namespace std;
class Bank
{
private:
    float real_principal;
    int year;
    static int ROE;
    float simple_intreset;

public:
    Box()
    {
        cout<<"Default constructor called"<<endl;
    }
    Bank (float b,int y)
    {
        real_principal=b;
        year=y;
    }
    Bank(int r)
    {
        ROE=r;
    }
    int getSI()
    {
        simple_intreset=(real_principal*ROE*year)/100;
        return simple_intreset;
    }
};
int Bank :: ROE=10;
int main()
{
    Bank b1(150,4);
    cout<<"Simple intreset = "<<b1.getSI()<<endl;
    return 0;
}
