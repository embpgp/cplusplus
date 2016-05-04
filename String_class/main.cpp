#include "My_String.h"

void Test1()
{
	cout<<"Test1 begins:"<<endl;
	const char *text = "hello world";
	My_String str1(text);
	My_String str2;
	str2 = str1;

	cout<<"The experted result is :"<<text<<endl;
	cout<<"The actual result is :";
	str2.Print();
	cout<<endl;
}

//赋值给自己
void Test2()
{
	cout<<"Test2 begins:"<<endl;
	const char *text = "hello world";
	My_String str1(text);
	str1 = str1;
	
	cout<<"The experted result is :"<<text<<endl;
	cout<<"The actual result is :";
	str1.Print();
	cout<<endl;
}

//连续赋值
void Test3()
{
	cout<<"Test3 begins:"<<endl;

	const char *text = "hello world";
	My_String str1(text);
	My_String str2,str3;
	str3 = str2 = str1;

	
	cout<<"The experted result is :"<<text<<endl;
	cout<<"The actual result is :";
	str2.Print();
	cout<<endl;
	str3.Print();
	cout<<endl;

}
int main(int argc, char *argv[])
{
	Test1();
	Test2();
	Test3();
	return 0;
}
