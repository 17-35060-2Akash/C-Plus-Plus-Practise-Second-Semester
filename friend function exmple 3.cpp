#include<iostream>
using namespace std;
class PL2B;
class PL2A
{
    int a;
public:
    PL2A()
    {

    }
    PL2A(int x)
    {
        a=x;
    }
    friend void compare(PL2A x,PL2B y);
};

class PL2B
{
    int b;
public:
    PL2B()
    {

    }
    PL2B(int x)
    {
        b=x;
    }
    friend void compare(PL2A x,PL2B y);

};

void compare(PL2A x,PL2B y)
{
    if(x.a>y.b)
        cout<<"PL2A is The better one"<<endl;
    else
        cout<<"PL2B is The better one"<<endl;
}


int main()
{
    PL2A a(65);
    PL2B b(78);
    compare(a,b);

    return 0;
}
