#include"pch.h"
#include"stdafx.h"

namespace SA
{
	void ZeroDivision(LEX::LexTable& ltable, char* literal)
	{
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i].lexema == LEX_LITERAL && ltable.table[i - 1].lexema == LEX_DIRSLASH && strcmp(literal,"0") == 0 )
			{
				throw ERROR_THROW(705, ltable.table[i].sn, ltable.table[i].indxTI);
			}
		}
	}

	void BoolLT(LEX::LexTable& ltable, ID::IDDATATYPE datatype)
	{
		bool flag = false;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i - 2].lexema == LEX_IF && ltable.table[i].lexema == LEX_LITERAL  && datatype !=ID::BOOL)
			{
				throw ERROR_THROW(704, ltable.table[i].sn, ltable.table[i].indxTI);
			}
		}
	}
	void OneDvv(LEX::LexTable& ltable, bool flag)
	{
		int k = 0;
		if (flag)
		{
		  k = 1;
	    }
		if (k == 1)
		{
			for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
			{
				if (ltable.table[i].lexema == LEX_DVV)
				{
					throw ERROR_THROW(706, ltable.table[i].sn, ltable.table[i].indxTI);
				}
			}
		}
	}
	void Inicial(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, ID::IDDATATYPE dtype)
	{
		ID::IDDATATYPE dataType;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if(ltable.table[i].lexema == LEX_LITERAL && ltable.table[i-2].lexema == LEX_ID && ltable.table[i-1].lexema == LEX_COMPARE )
			for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
			{
				if (strcmp(buf, itable.table[j].id) == 0)
				{
					dataType = itable.table[j].iddatatype;
					if (dataType != dtype)
					{
						throw ERROR_THROW(702, ltable.table[i].sn, ltable.table[i].indxTI);
					}
					break;
				}
			}
		}
	}
	void Parametrs(LEX::LexTable& ltable)
	{
		int k = 0;
		int m = 0;
		bool flag = false;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i].lexema == LEX_FUNCTION)
			{ 
			 flag = true;
			 m = i;
			 k = 0;
			}
			if (flag)
			{
				while (ltable.table[i].lexema != LEX_POINT)
				{
					if (ltable.table[i].lexema == LEX_ID  || ltable.table[i].lexema == LEX_LITERAL)
					{
						k++;
					}
					i++;
					flag = false;
				}
				if (ltable.table[m].parm != k)
				{
					throw ERROR_THROW(701, ltable.table[i].sn, ltable.table[i - 2].indxTI);
				}
			}
		}
	}
	void TypeofData(LEX::LexTable& ltable, ID::IdTable& itable, char* buffer)
	{
		ID::IDDATATYPE dataType;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i].lexema == LEX_FUNCTION )
			{
				for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
				{
					if (strcmp(buffer, itable.table[j].id) == 0)
					{
						dataType = itable.table[j].iddatatype;
						if (dataType != ID::STR)
						{
							throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
						}
						break;
					}
				}
			}
		}
	}

}
