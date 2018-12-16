#include "pch.h"
#include "stdafx.h"

namespace Gen
{
	Cs getcs(wchar_t csfile[])
	{
		Cs cs;
		wcscpy_s(cs.csfile, csfile);
		ofstream *FILE = new ofstream;
		(*FILE).open(csfile);
		if (!(*FILE).is_open())
		throw ERROR_THROW(108, ERROR_ZERO_LINE, ERROR_ZERO_COL);
		cs.stream = FILE;
		return cs;
	}
	void StartGeneration(LEX::LexTable& ltable, ID::IdTable& itable, Gen::Cs& cs)
	{
		START;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (ltable.table[i].lexema == LEX_INTEGER)
			{
				if (strcmp(ltable.table[i].buf, "integer") == 0)
				{
					*cs.stream << "int ";
			    }
				if (strcmp(ltable.table[i].buf, "string") == 0)
				{
					*cs.stream << "string ";
				}
				if (strcmp(ltable.table[i].buf, "bool") == 0)
				{
					*cs.stream << "bool ";
				}
			}
			if (ltable.table[i].lexema == LEX_LITERAL)
			{
				*cs.stream << ltable.table[i].buf;
			}
			if (ltable.table[i].lexema == LEX_LIBFUNC)
			{
				if (ltable.table[i].parm == 1)
				{
					*cs.stream << "strlen";
				}
				if (ltable.table[i].parm == 2)
				{
					*cs.stream << "substr";
				}
			}
			if (ltable.table[i].lexema == LEX_ID)
			{
				if (ltable.table[i + 1].lexema == LEX_LEFTHESIS || ltable.table[i + 1].lexema == LEX_RIGHTHESIS || ltable.table[i+1].lexema == LEX_COMMA)
				{
					*cs.stream << ltable.table[i].buf;
			    }
				else
				{
				*cs.stream << ltable.table[i].buf << " ";
				}
			}
			if (ltable.table[i].lexema == LEX_LEFTHESIS)
			{
				*cs.stream << "(";
			}
			if (ltable.table[i].lexema == LEX_RIGHTHESIS)
			{
				  *cs.stream << ")";
			}
			if (ltable.table[i].lexema == LEX_LEFTBRACE)
			{
				*cs.stream << "{";
			}
			if (ltable.table[i].lexema == LEX_RIGHTBRACE)
			{
				*cs.stream  << "}";
			}
			if (ltable.table[i].lexema == LEX_RETURN)
			{
				*cs.stream << "return ";
			}
			if (ltable.table[i].lexema == LEX_PRINT)
			{
				*cs.stream << "Console.WriteLine";
			}
			if (ltable.table[i].lexema == LEX_DVV)
			{
				*cs.stream << "void Main(string[] args)";
			}
			if (ltable.table[i].lexema == LEX_IF)
			{
				*cs.stream << "if ";
			}
			if (ltable.table[i].lexema == LEX_ELSE)
			{
				*cs.stream << "else";
			}
			if (ltable.table[i].lexema == LEX_POINT)
			{
					*cs.stream << ";";
			}
			if (ltable.table[i].lexema == LEX_COMMA)
			{
				*cs.stream << ",";
			}
			if (ltable.table[i].lexema == LEX_PLUS)
			{
				*cs.stream << " + ";
			}
			if (ltable.table[i].lexema == LEX_MINUS)
			{
				*cs.stream << " - ";
			}
			if (ltable.table[i].lexema == LEX_STAR)
			{
				*cs.stream << " * ";
			}
			if (ltable.table[i].lexema == LEX_DIRSLASH)
			{
				*cs.stream << " / ";
			}
			if (ltable.table[i].lexema == LEX_COMPARE)
			{
				*cs.stream << " = ";
			}
			if (ltable.table[i].lexema == LEX_EQUALLY)
			{
				*cs.stream << " == ";
			}
			if (ltable.table[i].lexema == LEX_MORE)
			{
				*cs.stream << " > ";
			}
			if (ltable.table[i].lexema == LEX_LESS)
			{
				*cs.stream << " < ";
			}
			if (ltable.table[i].sn != ltable.table[i + 1].sn)
			{
				*cs.stream << endl;
			}
		}
		END;
	}
}