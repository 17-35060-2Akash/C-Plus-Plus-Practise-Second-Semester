#include<iostream>
using namespace std;

class rect
{
    public:
    rect()
    {
        cout<<"cons"<<endl;
    }
    ~rect()
    {
        cout<<"dest"<<endl;
    }
};

int main()
{
    rect *a=new rect;
    delete a;

    return 0;
}
