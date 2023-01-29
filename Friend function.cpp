#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a, int b)
    {
        height=a;
        width=b;
    }
    int area()
    {
        return height*width;
    }
};

class cost
{
    int costrate;
public:
    void setvalue(int a)
    {
        costrate=a;
    }
    int totalcost(rectangle a)
    {
        return costrate*a.area();
    }
};

int main()
{
    rectangle r;
    r.set(a,b);
    Cout<<"Enter The Height And Width of The Rectamgle:"<<Endl;
    cin>>a>>b;
    cost c;
    c.setvalue(z);
    Cout<<"Enter The Cost Pera SQ:"<<endl;
    cin>>z>>

return 0;
}
