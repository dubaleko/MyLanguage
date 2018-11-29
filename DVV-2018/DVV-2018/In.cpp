#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;


namespace In
{
	IN getin(wchar_t infile[])
	{
		IN txt = { 0, 0, "", IN_CODE_TABLE };
		int col = 0;
		ifstream file(infile, ios_base::in);
		if (!file.is_open())
		{
			throw ERROR_THROW(110,txt.lines,col);
		}
		else
		{
			unsigned char symb;
			while ((symb = file.get()) && !file.eof())
			{
				if (txt.code[symb] == IN::F)
				{
					throw ERROR_THROW(111, txt.lines, col);
				}
				else
				{
					if (symb == IN_CODE_ENDL)
					{
						txt.lines++;
						col = 0;
					}
					txt.text[txt.size] = symb;
					txt.size++;
					col++;
				}
			}
			txt.text[txt.size] = '\0';
			file.close();
			return txt;
		}
	}
};