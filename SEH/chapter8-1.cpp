#include <iostream>
using namespace std;

int main(void)
{
	cout<<"1--before try block.."<<endl;
	try
	{
		cout<<"2--Inside try block..."<<endl;
		throw 10;
		cout<<"3--After the throw..."<<endl;
	
	}
	catch(char *s)
	{
		cout<<"5--In catch block2..catch an char* type exception...errcode is .."<<s<<endl;
	}
//	catch(int i)
//	{
//		cout<<"4--In catch block1...catch an int type exception...errcode is .."<<i<<endl;
//	}
	cout<<"6--After catch..."<<endl;
	return 0;
}
