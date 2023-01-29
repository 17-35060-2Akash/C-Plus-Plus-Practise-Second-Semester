#include<iostream>
using namespace std;

class rect
{
    int height;
    int width;
public:
    void set(int height, int width)
    {
        this->height=height;
        this->width=width;
    }

    int area();

};

int rect::area()
{
    return height*width;
}

int main()
{
    rect ob;
    ob.set(2,3);
    cout<<ob.area()<<endl;
    return 0;
}
