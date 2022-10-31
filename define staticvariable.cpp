#include<iostream>
using namespace std;
class stcount
{
private:
    static int k;
    int count=0;
public:
   static  int getstaticv()
    {
        return k;
    }
    int getv()
    {
        return count;
    }
    int staf()
    {
        count++;
        return count;
    }
};
int main()
{
    stcount s1,s2,s3;
    s1.staf();
    s2.staf();
    s3.staf();
    cout<<"count= "<<s3.staf();


}
