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
		throw ERROR_THROW(3,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		delete ltable.table;
		ltable.table = nullptr;
	}

	Entry GetEntry(LexTable& ltable, int nstr)
	{
		if (ltable.size > nstr)
		throw ERROR_THROW(5,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		return ltable.table[nstr];
	}
}