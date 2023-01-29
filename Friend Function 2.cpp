#include<iostream>
using namespace std;

class PL2H; //class prototype
class PL2A{

float a;
public:
PL2A(){


}
PL2A(float x){

a=x;
cout<<a<<endl;;
}
friend void compare(PL2A e, PL2H h);
};
class PL2H{

float b;
public:
PL2H(){


}
PL2H(float y){

b=y;
cout<<b<<endl;
}
friend void compare(PL2A e, PL2H h);

};
void compare(PL2A e, PL2H h){

if(e.a>h.b){

    cout<<"PL2 Section A is better"<<endl;
}
else{

    cout<<"PL2 Section H is better"<<endl;
}

}

int main(){

PL2A l(.65);
PL2H m(.75);
compare(l,m);

}
