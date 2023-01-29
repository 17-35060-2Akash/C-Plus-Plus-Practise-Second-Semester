#include<iostream>
#include<string>

using namespace std;

int bigger()
{
    string s1("Hello");
    string s2("Good");
    return s1>s2? "S1 is bigger":"S2 is bigger";
}

int main()
{
    bigger();
    return 0;


    }
