#include<iostream>
using namespace std;
class complex
{
private :
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setData(4,6);
    c2.setData(2,7);
    c3=c2.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();

}
