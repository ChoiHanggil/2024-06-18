#include <iostream>

class String
{
private: 
	char* mStr;

public:
	String()
	{
		mStr = nullptr;
	}
	String(const char* str)
	{
		mStr = new char[sizeof(str)];
		for (int i = 0; i < sizeof(str); i++)
		{
			mStr[i] = str[i];
		}
	}
	String(const String& str)
	{

	}
};