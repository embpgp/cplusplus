/*C++异常处理函数
*由调用者来处理异常
*2016年4月26日
*/
#include <iostream>
#include <string>
using namespace std;

void temperature(int t)
{
	if(t == 100)
	{
		throw "沸点!";
	}
	else if(t == 0)
	{
		throw "冰点!";
	}
	else
	{
		cout<<"the temperature is .."<<t<<endl;
	}
}

int main(void)
{
	try
	{
		temperature(10);
		temperature(50);
		temperature(100);
	}
	catch(const char* s)
	{
		cout<<s<<endl;
	}
}
