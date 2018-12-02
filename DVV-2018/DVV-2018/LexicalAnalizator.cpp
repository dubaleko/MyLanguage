#include "pch.h"
#include "stdafx.h"

namespace LA
{
	void Lexicalanaliz(char inText[], Log::LOG, LEX::LexTable& lextable, ID::IdTable& idtable)
	{
		int line = 0, col = 0, sizeofbuf = 0;
		bool provsep = false;
		bool proverka = false;
		bool newflag = false;
		bool secondflag = false;
		char string[5] = "LTR ";
		char buffer[LT_MAXSIZE];
		char newbuf[LT_MAXSIZE];
		LEX::LexTable* ltable;
		ID::IdTable* itable;
		ID::IDDATATYPE dataType;
		ID::IDTYPE idType;
		ltable = &lextable;
		itable = &idtable;
        // больше сепараторов?? 
		for (int i = 0; i < strlen(inText); i++)
		{
			buffer[sizeofbuf] = inText[i];
		    sizeofbuf++;
			secondflag = false;
			provsep = false;
			if (newflag)
			{
				line++;
				col = 0;
				newflag = false;
			}
			if (inText[i] == LEX_SPACE || inText[i] == LEX_ENDL || inText[i] == LEX_POINT || inText[i] == LEX_LEFTHESIS || inText[i] == LEX_RIGHTHESIS || inText[i] == LEX_RIGHTBRACE || inText[i] == LEX_LEFTBRACE || inText[i] == LEX_COMMA)
			{
				if (inText[i] == LEX_ENDL)
				{
					newflag = true;
				}
				if (inText[i] == LEX_POINT || inText[i] == LEX_LEFTHESIS || inText[i] == LEX_RIGHTHESIS || inText[i] == LEX_RIGHTBRACE || inText[i] == LEX_LEFTBRACE || inText[i] == LEX_COMMA)
				{
					newbuf[0] = buffer[sizeofbuf-1];
					newbuf[1] = LEX_END;
					secondflag = true;
				}
				if (sizeofbuf == 1)
				{
					buffer[sizeofbuf] = LEX_END;
				}
				else
				{
					buffer[sizeofbuf-1] = LEX_END;
				}
				sizeofbuf = 0;
				provsep = true;
			}
			col++;
			if (provsep)
			{
				FST::FST fstint(buffer, FST_INTEGER);
				if (FST::execute(fstint))
				{
					LEX::Entry lEntry = { LEX_INTEGER , line };
					LEX::Add(*ltable, lEntry);
					dataType = ID::INT;
					idType = ID::P;
					goto link;
				}
				FST::FST fststr(buffer, FST_STRING);
				if (FST::execute(fststr))
				{
					LEX::Entry lEntry = { LEX_STRING, line };
					LEX::Add(*ltable, lEntry);
					dataType = ID::STR;
					idType = ID::P;
					goto link;
				}
				FST::FST fstbool(buffer, FST_BOOL);
				if (FST::execute(fstbool))
				{
					LEX::Entry lEntry = { LEX_BOOL, line };
					LEX::Add(*ltable, lEntry);
					dataType = ID::BOOL;
					idType = ID::P;
					goto link;
				}
				FST::FST fstret(buffer, FST_RETURN);
				if (FST::execute(fstret))
				{
					LEX::Entry lEntry = { LEX_RETURN, line };
					LEX::Add(*ltable, lEntry);
					idType = ID::V;
					goto link;
				}
				FST::FST fstprint(buffer, FST_PRINT);
				if (FST::execute(fstprint))
				{
					LEX::Entry lEntry = { LEX_PRINT, line };
					LEX::Add(*ltable, lEntry);
					idType = ID::V;
					goto link;
				}
				FST::FST fstdvv(buffer, FST_DVV);
				if (FST::execute(fstdvv))
				{
					LEX::Entry lEntry = { LEX_DVV, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstif(buffer, FST_IF);
				if (FST::execute(fstif))
				{
					LEX::Entry lEntry = { LEX_IF, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstelse(buffer, FST_ELSE);
				if (FST::execute(fstelse))
				{
					LEX::Entry lEntry = { LEX_ELSE, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fststrlen(buffer, FST_STRLEN);
				if (FST::execute(fststrlen))
				{
					LEX::Entry lEntry = { LEX_FUNCTION, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstsubstr(buffer, FST_SUBSTR);
				if (FST::execute(fstsubstr))
				{
					LEX::Entry lEntry = { LEX_FUNCTION, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST  fstlitbool(buffer, FST_BOOLLIT);
				if (FST::execute(fstlitbool))
				{
					LEX::Entry lEntry = { LEX_LITERAL, line };
					LEX::Add(*ltable, lEntry);
					ID::Entry iEntry;
					strcpy(iEntry.id, string);
					iEntry.iddatatype = ID::BOOL;
					iEntry.idtype = ID::L;
					strcpy(iEntry.value.vbool, buffer);
					for (int i = 0; i < itable->size; i++)
					{
						if (strcmp((*itable).table[i].value.vbool,iEntry.value.vbool) == 0) 
						{
							proverka = true;
							break;
						}
						else proverka = false;
					}
					iEntry.idxfirstLE = line;
					if (!proverka)
					{
						ID::Add(*itable, iEntry);
					}
					goto link;
				}
				FST::FST fstid(buffer, FST_ID);
				if (FST::execute(fstid))
				{
					LEX::Entry lEntry = { LEX_ID, line };
					LEX::Add(*ltable, lEntry);
					ID::Entry iEntry;
					bool isExecute = false;
					for (int i = 0; i <= (*itable).size; i++)
					{
						if (strcmp((*itable).table[i].id, buffer) == 0)
						{
							isExecute = true;
						}
					}
					if (!isExecute)						//если переменна€ не объ€влена
					{
						strcpy(iEntry.id, buffer);
						iEntry.idtype = idType;
						iEntry.iddatatype = dataType;
						iEntry.value.vint = TI_INT_DEFAULT;
						iEntry.value.vstr->len = TI_STR_DEFAULT;
						strcpy(iEntry.value.vstr->str, "");
						iEntry.idxfirstLE = line;
						ID::Add(*itable, iEntry);
					}
					goto link;
				}
				FST::FST fstintlit(buffer, FST_INTLIT);
				if (FST::execute(fstintlit))
				{
					LEX::Entry lEntry = { LEX_LITERAL, line };
					LEX::Add(*ltable, lEntry);
					ID::Entry iEntry;
					strcpy(iEntry.id, string);
					iEntry.iddatatype = ID::INT;
					iEntry.idtype = ID::L;
					long double bufNum = std::atoi(buffer);
					if (bufNum > INT_MAX)
					throw ERROR_THROW(7, line, col);
					iEntry.value.vint = (int)bufNum;
					for (int i = 0; i < itable->size; i++)
					{
						if (iEntry.value.vint == (*itable).table[i].value.vint)
						{
							proverka = true;
							break;
						}
						else  proverka = false;
					}
					iEntry.idxfirstLE = line;
					if (!proverka)
					{
					  ID::Add(*itable, iEntry);
					}
					goto link;
				}
				FST::FST fststrlit(buffer, FST_STRLIT);
				if (FST::execute(fststrlit))
				{
					LEX::Entry lEntry = { LEX_LITERAL, line };
					LEX::Add(*ltable, lEntry);
					ID::Entry iEntry;
					strcpy(iEntry.id, string);
					iEntry.iddatatype = ID::STR;
					iEntry.idtype = ID::L;
					if (strlen(buffer) > 255)
					throw ERROR_THROW(8, line, col);
					iEntry.value.vstr->len = strlen(buffer);
					strcpy(iEntry.value.vstr->str, buffer);
					for (int i = 0; i < itable->size; i++)
					{
						if (strcmp(iEntry.value.vstr->str, (*itable).table[i].value.vstr->str) == 0 )
						{

							proverka = true;
							break;
						}
						else proverka = false;
					}
					iEntry.idxfirstLE = line;
					if (!proverka)
					{
					  ID::Add(*itable, iEntry);
					}
					goto link;
				}
				FST::FST fstpoint(buffer, FST_POINT);
				if (FST::execute(fstpoint))
				{
					LEX::Entry lEntry = { LEX_POINT, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstcomma(buffer, FST_COMMA);
				if (FST::execute(fstcomma))
				{
					LEX::Entry lEntry = { LEX_COMMA, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstlbrace(buffer, FST_LEFTBRACE);
				if (FST::execute(fstlbrace))
				{
					LEX::Entry lEntry = { LEX_LEFTBRACE, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstrbrace(buffer, FST_RIGHTBRACE);
				if (FST::execute(fstrbrace))
				{
					LEX::Entry lEntry = { LEX_RIGHTBRACE, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstlthesis(buffer, FST_LEFTHESIS);
				if (FST::execute(fstlthesis))
				{
					LEX::Entry lEntry = { LEX_LEFTHESIS, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstrthesis(buffer, FST_RIGHTHESIS);
				if (FST::execute(fstrthesis))
				{
					LEX::Entry lEntry = { LEX_RIGHTHESIS, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstmore(buffer, FST_MORE);
				if (FST::execute(fstmore))
				{
					LEX::Entry lEntry = { LEX_MORE, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstless(buffer, FST_LESS);
				if (FST::execute(fstless))
				{
					LEX::Entry lEntry = { LEX_LESS, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstequally(buffer, FST_EQUALLY);
				if (FST::execute(fstequally))
				{
					LEX::Entry lEntry = { LEX_EQUALLY, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstcompare(buffer, FST_COMPARE);
				if (FST::execute(fstcompare))
				{
					LEX::Entry lEntry = { LEX_COMPARE, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstplus(buffer, FST_PLUS);
				if (FST::execute(fstplus))
				{
				   LEX::Entry lEntry = { LEX_PLUS, line };
				   LEX::Add(*ltable, lEntry);
				   goto link;
				}
				FST::FST fstminus(buffer, FST_MINUS);
				if (FST::execute(fstminus))
				{
					LEX::Entry lEntry = { LEX_MINUS, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fststar(buffer, FST_STAR);
				if (FST::execute(fststar))
				{
					LEX::Entry lEntry = { LEX_STAR, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
				FST::FST fstslash(buffer, FST_DIRSLASH);
				if (FST::execute(fstslash))
				{
					LEX::Entry lEntry = { LEX_DIRSLASH, line };
					LEX::Add(*ltable, lEntry);
					goto link;
				}
            }
		    link:
			if (secondflag)
			{	
				FST::FST fstp(newbuf, FST_POINT);
				if (FST::execute(fstp))
				{
					LEX::Entry lEntry = { LEX_POINT , line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstlft(newbuf, FST_LEFTHESIS);
				if (FST::execute(fstlft))
				{
					LEX::Entry lEntry = { LEX_LEFTHESIS , line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstrft(newbuf, FST_RIGHTHESIS);
				if (FST::execute(fstrft))
				{
					LEX::Entry lEntry = { LEX_RIGHTHESIS , line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstrb(newbuf, FST_RIGHTBRACE);
				if (FST::execute(fstrb))
				{
					LEX::Entry lEntry = { LEX_RIGHTBRACE , line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstlb(newbuf, FST_LEFTBRACE);
				if (FST::execute(fstlb))
				{
					LEX::Entry lEntry = { LEX_LEFTBRACE , line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
				FST::FST fstc(newbuf, FST_COMMA);
				if (FST::execute(fstc))
				{
					LEX::Entry lEntry = { LEX_COMMA, line };
					LEX::Add(*ltable, lEntry);
					continue;
				}
			}
		}
	}
}
