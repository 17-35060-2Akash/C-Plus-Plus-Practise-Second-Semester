#include<iostream>
#include<string>
using namespace std;


int main()
{
    string s1("hello");
    string s2("good");
    cout<<s1.compare(s2)<<endl;
     cout<<s2.compare(s1)<<endl;
     cout<<s1.swap(s2)<<endl;

    return 0;
}
