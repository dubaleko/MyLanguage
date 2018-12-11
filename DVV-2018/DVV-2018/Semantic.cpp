#include"pch.h"
#include"stdafx.h"

namespace SA
{
	void ZeroDivision(LEX::LexTable& ltable, char* literal)
	{
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i].lexema == LEX_LITERAL && ltable.table[i - 1].lexema == LEX_DIRSLASH && strcmp(literal, "0") == 0)
			{
				throw ERROR_THROW(704, ltable.table[i].sn, ltable.table[i - 1].indxTI);
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
					throw ERROR_THROW(705, ltable.table[i].sn, ltable.table[i].indxTI);
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
					if (ltable.table[i].lexema == LEX_ID || ltable.table[i].lexema == LEX_LITERAL)
					{
						k++;
					}
					i++;
					flag = false;
				}
				if (ltable.table[m].parm != k)
				{
					throw ERROR_THROW(701, ltable.table[i].sn, ltable.table[i].indxTI);
				}
			}
		}
	}
	void TypeofParameters(LEX::LexTable& ltable, ID::IdTable& itable)
	{
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			char* buf[LT_MAXSIZE];
			if (ltable.table[i].lexema == LEX_FUNCTION && ltable.table[i].parm == 1)
			{
				if (ltable.table[i + 2].lexema == LEX_ID)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(ltable.table[i + 2].buf, itable.table[j].id) == 0)
						{
							if (itable.table[j].iddatatype != ID::STR)
							{
								throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
							}
						}
					}
				}
				if (ltable.table[i + 2].lexema == LEX_LITERAL)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(ltable.table[i + 2].buf, itable.table[j].value.vstr->str) == 0)
						{
							if (itable.table[j].iddatatype != ID::STR)
							{
								throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
							}
						}
						if (strcmp(ltable.table[i + 2].buf, itable.table[j].value.vbool) == 0)
						{
							if (itable.table[j].iddatatype != ID::STR)
							{
								throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
							}
						}
					}
				}
			}
			if (ltable.table[i].lexema == LEX_FUNCTION && ltable.table[i].parm == 2)
			{
				while (ltable.table[i].lexema != LEX_RIGHTHESIS)
				{
					if (ltable.table[i].lexema == LEX_ID)
					{
						for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
						{
							if (strcmp(ltable.table[i].buf, itable.table[j].id) == 0)
							{
								if (itable.table[j].iddatatype != ID::STR)
								{
									throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
								}
							}
						}
					}
					if (ltable.table[i].lexema == LEX_LITERAL)
					{
						for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
						{
							if (strcmp(ltable.table[i].buf, itable.table[j].value.vstr->str) == 0)
							{
								if (itable.table[j].iddatatype != ID::STR)
								{
									throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
								}
							}
							if (strcmp(ltable.table[i].buf, itable.table[j].value.vbool) == 0)
							{
								if (itable.table[j].iddatatype != ID::STR)
								{
									throw ERROR_THROW(700, ltable.table[i].sn, ltable.table[i].indxTI);
								}
							}
						}
					}
					i++;
				}
			}
		}
	}
	void BoolLt(LEX::LexTable& ltable, ID::IdTable& itable)
	{
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i].lexema == LEX_ID && ltable.table[i - 2].lexema == LEX_IF && ltable.table[i + 1].lexema == LEX_RIGHTHESIS)
			{
				for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
				{
					if (strcmp(ltable.table[i].buf, itable.table[j].id) == 0)
					{
						if (itable.table[j].iddatatype != ID::BOOL)
						{
							throw ERROR_THROW(703, ltable.table[i].sn, ltable.table[i].indxTI);
						}
					}
				}
			}
			if (ltable.table[i].lexema == LEX_LITERAL && ltable.table[i - 2].lexema == LEX_IF && ltable.table[i + 1].lexema == LEX_RIGHTHESIS)
			{
				for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
				{
					if (strcmp(ltable.table[i].buf, itable.table[j].value.vstr->str) == 0)
					{
						if (itable.table[j].iddatatype != ID::BOOL)
						{
							throw ERROR_THROW(703, ltable.table[i].sn, ltable.table[i].indxTI);
						}
					}
				}
			}
		}
	}
	void Operation(LEX::LexTable& ltable, ID::IdTable& itable)
	{
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			char* buf[LT_MAXSIZE];
			int k = 0;
			int l = 0;
			if (ltable.table[i].lexema == LEX_ID && ltable.table[i - 1].znak == 1 || ltable.table[i + 1].znak == 1)
			{
				while (ltable.table[i].lexema != LEX_POINT)
				{
					if (ltable.table[i].lexema == LEX_ID)
					{
						buf[k] = ltable.table[i].buf;
						k++;
					}
					i++;
				}
				for (unsigned int l = 0; l < (unsigned int)k; l++)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[l], itable.table[j].id) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(706, ltable.table[i].sn, ltable.table[i-2].indxTI);
							}
						}
					}
				}
			}
			if (ltable.table[i].lexema == LEX_ID && ltable.table[i - 1].znak == 2 || ltable.table[i + 1].znak == 2)
			{
				while (ltable.table[i].lexema != LEX_RIGHTHESIS)
				{
					if (ltable.table[i].lexema == LEX_ID)
					{
						buf[k] = ltable.table[i].buf;
						k++;
					}
					i++;
				}
				for (unsigned int l = 0; l < (unsigned int)k; l++)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[l], itable.table[j].id) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(707, ltable.table[i].sn, ltable.table[i - 1].indxTI);
							}
						}
					}
				}
			}
		}
	}
	void Operationl(LEX::LexTable& ltable, ID::IdTable& itable)
	{
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			char* buf[LT_MAXSIZE];
			ID::IDDATATYPE data[LT_MAXSIZE];
			int k = 0;
			int z = 0;
			if (ltable.table[i].lexema == LEX_LITERAL && ltable.table[i - 1].znak == 1 || ltable.table[i + 1].znak == 1)
			{
				while (ltable.table[i].lexema != LEX_POINT)
				{
					if (ltable.table[i].lexema == LEX_LITERAL)
					{
						buf[k] = ltable.table[i].buf;
						k++;
					}
					i++;
				}
				for (unsigned int l = 0; l < (unsigned int)k; l++)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[l], itable.table[j].value.vstr->str) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(706, ltable.table[i].sn, ltable.table[i - 2].indxTI);
							}
						}
						if (strcmp(buf[l], itable.table[j].value.vbool) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(706, ltable.table[i].sn, ltable.table[i - 2].indxTI);
							}
						}
					}
				}
			}
			if (ltable.table[i].lexema == LEX_LITERAL && ltable.table[i - 1].znak == 2 || ltable.table[i + 1].znak == 2)
			{
				while (ltable.table[i].lexema != LEX_RIGHTBRACE)
				{
					if (ltable.table[i].lexema == LEX_LITERAL)
					{
						buf[k] = ltable.table[i].buf;
						k++;
					}
					i++;
				}
				for (unsigned int l = 0; l < (unsigned int)k; l++)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[l], itable.table[j].value.vstr->str) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(707, ltable.table[i].sn, ltable.table[i - 1].indxTI);
							}
						}
						if (strcmp(buf[l], itable.table[j].value.vbool) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(707, ltable.table[i].sn, ltable.table[i - 1].indxTI);
							}
						}
					}
				}
			}
		}
	}
	void InicialId(LEX::LexTable& ltable, ID::IdTable& itable)
	{
		ID::IDDATATYPE datatype;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			char* buf[LT_MAXSIZE];
			ID::IDDATATYPE data[LT_MAXSIZE];
			int k = 0;
			int z = 0;
			if (ltable.table[i].lexema == LEX_ID && ltable.table[i + 1].lexema == LEX_COMPARE && ltable.table[i + 2].lexema == LEX_FUNCTION)
			{
				if (ltable.table[i + 2].parm == 1)
				{
					buf[0] = ltable.table[i].buf;
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[0], itable.table[j].id) == 0)
						{
							if (itable.table[j].iddatatype != ID::INT)
							{
								throw ERROR_THROW(702, ltable.table[i].sn, ltable.table[i].indxTI);
							}
						}
					}
				}
				if (ltable.table[i + 2].parm == 2)
				{
					buf[0] = ltable.table[i].buf;
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[0], itable.table[j].id) == 0)
						{
							if (itable.table[j].iddatatype != ID::BOOL)
							{
								throw ERROR_THROW(702, ltable.table[i].sn, ltable.table[i].indxTI);
							}
						}
					}
				}
				continue;
			}
			if (ltable.table[i].lexema == LEX_ID && ltable.table[i + 1].lexema == LEX_COMPARE)
			{
				while (ltable.table[i].lexema != LEX_POINT)
				{
					if (ltable.table[i].lexema == LEX_ID)
					{
						buf[k] = ltable.table[i].buf;
						k++;
					}
					i++;
				}
				for (unsigned int l = 0; l < (unsigned int)k; l++)
				{
					for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
					{
						if (strcmp(buf[l], itable.table[j].id) == 0)
						{
							data[z] = itable.table[j].iddatatype;
							z++;
						}
					}
				}
				datatype = data[0];
				for (unsigned int m = 0; m < (unsigned int)z; m++)
				{
					if (data[m] != datatype)
					{
						throw ERROR_THROW(702, ltable.table[i].sn, ltable.table[i - 2].indxTI);
					}
				}
			}

		}
	}
	void Inicial(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, ID::IDDATATYPE dtype, int line, int col)
	{
		ID::IDDATATYPE dataType;
		for (unsigned int j = 0; j < (unsigned int)itable.size; j++)
		{
			for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
			{
				if (ltable.table[i].lexema == LEX_IF)
				{
					if (ltable.table[i].sn == line)
					{
						continue;
					}
				}
		    }
			if (strcmp(buf, itable.table[j].id) == 0)
			{
				dataType = itable.table[j].iddatatype;
				if (dataType != dtype)
				{
					throw ERROR_THROW(702, line, col);
				}
			}
		}
	}
}
