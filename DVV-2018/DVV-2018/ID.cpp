#include "pch.h"
#include "stdafx.h"

namespace ID
{
	IdTable Create(int size)
	{
		if (size >= TI_MAXSIZE)
			throw ERROR_THROW(114,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		IdTable itable = { size, 0, new Entry[size] };
		return itable;
	}

	void Add(IdTable& itable, Entry istr)
	{
		itable.table[itable.size] = istr;
		itable.size++;
		if (itable.size >= itable.maxsize)
		throw ERROR_THROW(114,ERROR_ZERO_LINE,ERROR_ZERO_COL);
	}

	void Delete(IdTable& itable)
	{
		if (!&itable)
		throw ERROR_THROW(4,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		delete itable.table;
		itable.table = nullptr;
	}

	Entry GetEntry(IdTable& itable, int nstr)
	{
		if (itable.size > nstr)
			throw ERROR_THROW(6,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		return itable.table[nstr];
	}
	int ID::IsId(IdTable& idtable, char id[ID_MAXSIZE]) {
		bool flag = false;
		for (int i = idtable.size - 1; i > -1; i--)
		{
			flag = false;
			for (int j = 0; j < ID_MAXSIZE; j++)
				if (idtable.table[i].id[j] != id[j]) {
					flag = true;
					break;
				}
			if (flag == false)
				return i;
		}
		return TI_NULLIDX;
	}
}