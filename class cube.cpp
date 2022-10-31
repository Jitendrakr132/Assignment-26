#include<iostream>
using namespace std;
class Cube
{
private :
    int a;
    int Valume;
public :
    cube()
    {
        a=0;
    }
    cube(int x)
    {
        a=x;
    }
    void setvalue(int x)
    {
        a=x;
    }
    int getvalue()
    {
        return a;
    }
    int getValume()
    {
        Valume=a*a*a;
        return Valume;
    }
};
int main()
{
    Cube c1,c2;
    c1.setvalue(3);
    cout<<"cube number "<<c1.getvalue()<<" Valume is="<<c1.getValume()<<endl;
}
