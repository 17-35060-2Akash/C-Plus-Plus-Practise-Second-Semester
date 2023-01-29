#include<iostream>
using namespace std;

class M
{
protected:
    int m;
public:
    void set(int x)
    {
        m=x;
    }
    void show();
};
void M::show()
{
    cout<<m<<endl;
}

class N
{
protected:
    int n;
public:
    void set(int x)
    {
        n=x;
    }
    void show();
};
void N::show()
{
    cout<<n<<endl;
}

class P:public M,public N
{
public:
    void display()
    {
        M::display();
        N::display();
    }
};


int main()
{
    P aa;
    aa.set(4);
    aa.M::display();
    aa.N::display();


    return 0;
}
