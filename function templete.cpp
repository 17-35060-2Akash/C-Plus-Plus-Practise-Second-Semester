#include<iostream>
using namespace std;


template <class T, class D>

class A
{

    T x;
    D y;
public:
    void show(T a, D b)
    {
        this->x=a;
        this->y=b;
        cout<<x<<" "<<y<<endl;
    }
    void sum()
    {
        cout<<"result:"<<x+y<<endl;
    }
};




int main()
{
   A<int,double> ob;
   ob.show(5,5.6);
   A<double,int> ob1;
   ob1.sum(1.1,1);


     return 0;
}

