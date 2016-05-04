/*
*Copyright (c) 2016
*
*All rights reserved.
*
*参考《高质量编程》和《剑指offer》
*
*/
#ifndef __MY_STRING__H
#define __MY_STRING__H

#include <iostream>
#include <cstring>
using namespace std;
class My_String
{
public:
	My_String(const char* str = NULL);
	My_String(const My_String &other);
	My_String &operator=(const My_String &other);
	~My_String(void);
	void Print(void);
private:
	char *m_data;
};


#endif
