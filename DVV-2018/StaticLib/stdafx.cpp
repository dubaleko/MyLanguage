#include "stdafx.h"
#include <iostream>
#pragma warning(disable: 4996)

extern "C++"
{
	int strlen(char* str)
	{
		int size = 0;
		while (str[size] != '\0')
		size++;
		return size;
	}
	bool substr(char* mystr, char* str)
	{
		int i, j, k;
		for (i = 0; mystr[i] != '\0'; i++)
		{
			for (i = j, k = 0; str[k] != '\0' && mystr[j] == str[k]; j++, k++)
				;
			if (k > 0 && str[k] == '\0')
				return true;
			else
				return false;
		}
	}
}