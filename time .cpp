#include<iostream>
using namespace std;
class Time
{
private :
    int h;
    int m;
    int s;
public :
    void setTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showTime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void normalize()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(4,23,45);
    t2.setTime(5,34,43);
    t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
}
