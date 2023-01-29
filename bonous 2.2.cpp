#include<iostream>
using namespace std;

class PoweredDevice
{
    int power;
public:
    PoweredDevice(int power)
    {
        this->power=power;
        cout<<power<<endl;
    }
