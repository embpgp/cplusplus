#include "My_String.h"

//普通构造函数
My_String::My_String(const char *str)
{
	if(str == NULL)
	{
		m_data = new char[1];
		m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}

}

//析构函数
My_String::~My_String()
{
	delete []m_data;
}

//拷贝构造函数
My_String::My_String(const My_String & other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}

//赋值构造函数
My_String &My_String::operator=(const My_String &str)
{
	//检查自赋值，当多个类继承在实例化对象时候，可能导致赋值给本身
	if(this == &str)
	{
		return *this;
	}
	//刚刚看到剑指offer书上说如果此时程序先delete掉原有对象，而在new新的
	//空间时法神bad_alloc等异常，将破坏掉原来的对象，因此，为了程序的健壮性
	//方法1，先进行new,成功后再delete原来的空间
	//方法2，先创建临时实例，然后交换此时两者的指针，当临时的变量生命期结束时候调用析构函数自动传入
	//赋值对象的指针，此时将被析构掉，而新的对象将继续存在，方法2如下：
	My_String strTemp(str);      //调用复制拷贝函数
 	char *pTemp = strTemp.m_data;
	strTemp.m_data = m_data;
	m_data = pTemp;
	return *this;
	
}

void My_String::Print()
{
	cout<<m_data<<endl;
}
