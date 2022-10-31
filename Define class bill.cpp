#include<iostream>
using namespace std;
class Bill
{
private:
    int unit;
public:
    Bill()
    {
        cout<<"Default constructo is called"<<endl;
    }
    Bill(int x)
    {
        cout<<"paratemerize constructor is called"<<endl;
        unit=x;
    }
    Bill(Bill &b)
    {
        cout<<"Copy constructor is called"<<endl;
        unit=b.unit;
    }
    void setunit(int y)
    {
        unit=y;
    }
    int getunit()
    {
        return unit;
    }
    int calculatebill()
    {
        if(unit>=1&&unit<=100)
            return unit*(1.20);
        if(unit>=100&&unit<=200)
            return unit*2;
        else if(unit>=200)
            return unit*3;
        else
            return 0;
    }

};
int main()
{
    Bill b1(300);
    cout<<"unit ="<<b1.getunit()<<" "<<"calculate electricity = "<<b1.calculatebill()<<endl;

    return 0;

}
