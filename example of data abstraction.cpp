#include<iostream>
using namespace std;

class base
{
    int a;
    public:
        void print()
        {
            cout<<"base"<<endl;
        }

};

class derived:public base
{
    void print()
        {
            cout<<"derived"<<endl;
        }
};

int main()
{
    base *b;
    derived d;
    b=&d;
    b->print();



    return 0;
}
