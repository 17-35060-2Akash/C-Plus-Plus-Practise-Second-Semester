#include<iostream>
using namespace std;

void test(int x)
{
	if(x==0) throw 1;
	if(x==1) throw 1.0;

}
int main()
{
	int n;
	cin>>n;
	try{
		test(n);
		cout<<"exiting try\n";
	}
	catch(int a){
	cout<<"catch integer"<<endl;

	}
/*	catch(double b){
	cout<<"catch float"<<endl;

	}*/
	catch(...)
	{
		cout<<"catch all\n";
	}
	cout<<"end\n";
	return 0;
}
