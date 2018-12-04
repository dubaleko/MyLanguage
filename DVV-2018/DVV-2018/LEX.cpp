#include "pch.h"
#include "stdafx.h"

namespace LEX
{
	LexTable Create(int size)
	{
		if (size >= LT_MAXSIZE)
		throw ERROR_THROW(113,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		LexTable ltable = { size, 0, new Entry[size] };
		return ltable;
	}

	void Add(LexTable& ltable, Entry& lstr)
	{
		if (ltable.size >= ltable.maxsize)
		throw ERROR_THROW(113,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		ltable.table[ltable.size] = lstr;
		ltable.size++;
	}

	void Delete(LexTable& ltable)
	{
		if (!&ltable)
		throw ERROR_THROW(117,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		delete ltable.table;
		ltable.table = nullptr;
	}

	Entry GetEntry(LexTable& ltable, int nstr)
	{
		if (ltable.size > nstr)
		throw ERROR_THROW(115,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		return ltable.table[nstr];
	}

	Lex getlex(wchar_t lexfile[])
	{
		Lex lx;
		wcscpy_s(lx.lexfile, lexfile);
		ofstream *FILE = new ofstream;
		(*FILE).open(lexfile);
		if (!(*FILE).is_open())
		throw ERROR_THROW(109, ERROR_ZERO_LINE, ERROR_ZERO_COL);
		lx.stream = FILE;
		return lx;
	}

	void Close(Lex lex)
	{
		(*lex.stream).close();
	}

	void WriteLex(Lex lx, LEX::LexTable& ltable)
	{
		*lx.stream << "  Таблица лексем:\n";
		unsigned int compLine = -1;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (compLine != ltable.table[i].sn)
			{
				*lx.stream << endl << ltable.table[i].sn << ".\t";
				compLine = ltable.table[i].sn;
			}
			*lx.stream << ltable.table[i].lexema;
		}
		*lx.stream << "\n\n";
	}
	void WriteData(Lex lx)
	{
		char Date[50];
		struct tm *date;
		const time_t nowtime = time(NULL);
		date = localtime(&nowtime);
		strftime(Date, 50, "%d.%m.%Y %H:%M:%S, %A", date);
		*lx.stream << "----Протокол lx----" << endl;
		*lx.stream << "Время создания протокола: " << Date << endl;
	}
}