#pragma once
#define LT_TABLE_SIZE 300
#define LT_MAXSIZE 4096					//максимальнео кол-во строк в таблице лексем
#define LT_TI_NULLIDX 0xffffffff		//нет эл-та таблицы индентификаторов
#define LEX_INTEGER 't'
#define LEX_STRING 't'
#define LEX_BOOL 't'
#define LEX_ID 'i'
#define LEX_LITERAL 'l'
#define LEX_DVV 'd'
#define LEX_IF 'w'
#define LEX_ELSE 'e'
#define LEX_RETURN 'r'
#define LEX_PRINT 'p'
#define LEX_FUNCTION 'f'
#define LEX_POINT '.'
#define LEX_COMMA ','
#define LEX_LEFTBRACE '['
#define LEX_RIGHTBRACE ']'
#define LEX_LEFTHESIS '('
#define LEX_RIGHTHESIS ')'
#define LEX_MORE '>'
#define LEX_LESS '<'
#define LEX_EQUALLY '='
#define LEX_COMPARE ':'
#define LEX_PLUS '+'
#define LEX_MINUS '-'
#define LEX_STAR '*'
#define LEX_DIRSLASH '/'
#define LEX_ENDL '\n'
#define LEX_END '\0'
#define LEX_SPACE ' '
#define LEX_APOS '\''


namespace LEX
{
	struct Entry//строка таблицы лексем
	{
		char lexema;
		int sn;//номер строки в тексте
		int indxTI;//индекс в таблице идентификаторов или LT_TI_NULLIDX
		int parm; // количество параметров в функции
	};

	struct LexTable//экземпяр таблицы лексем
	{
		int maxsize;//емкость таблицы лексем( < LT_MAXSIZE)
		int size;//текущий размер таблицы лексем ( < maxsize)
		Entry* table;//массив строк таблицы лексем
	};

	struct Lex
	{
		wchar_t lexfile[PARAMETER_MAX_SIZE];
		std::ofstream* stream;
	};

	static const Lex FIRSTINIT = { L"", NULL };	//для начальной инициализации Lex
	LexTable Create(int);//создать таблицу лексем(емкость таблицы лексем < LT_MAXSIZE)
	void Add(LexTable&, Entry&);//добавить строку в таблицу лексем(lextable, entry)
	Entry GetEntry(LexTable&, int);	//получить строку таблицы лексем(lextable, 'номер получаемой строки')
	void Delete(LexTable&);//удалить таблицу лексем
	Lex getlex(wchar_t lexfile[]);
	void Close(Lex lx);
	void WriteLex(Lex lx, LEX::LexTable& ltable); //записать таблицу в файл
	void WriteData(Lex lx); //время создания
}
