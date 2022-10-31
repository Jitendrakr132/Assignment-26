#include<iostream>
using namespace std;
class Box
{
private:
    int length;
    int braigth;
    int haigth;
    int valume;
public:
    Box()
    {
        cout<<"Default constructor called"<<endl;
    }
    Box(int x,int y,int z)
    {
        cout<<"Parameterize constructor is called"<<endl;
          length=x;
          braigth=y;
          haigth=z;
    }
    int getValume()
    {
        valume=length*braigth*haigth;
        return valume;
    }

};
int main()
{
    Box b1(5,4,6);
    cout<<"The Box Valume is "<<b1.getValume()<<endl;
}
