#pragma once
#define TI_TABLE_SIZE 100
#define ID_MAXSIZE 5					//макс кол-во символов в идентификаторе
#define TI_MAXSIZE 1024					//макс кол-во строк в таблице индентификаторов
#define TI_INT_DEFAULT 0x00000000		//значение по умолчанию дл€ типа инт
#define TI_STR_DEFAULT 0x00				//значение по умолчанию дл€ типа стр
#define TI_NULLIDX 0xffffffff			//нет элемента таблицы идентификаторов
#define TI_STR_MAXSIZE 255

namespace ID
{
	enum IDDATATYPE
	{
		INT = 1,STR,BOOL //типы данных идентификаторов
	};
	enum IDTYPE
	{
		V = 1, L , F //тип идентификатора(переменна€, литерал)
	};
	struct Entry
	{
		short idxfirstLE;//индекс первой строки в таблице лексем
		char id[ID_MAXSIZE * 2];//идентификатор(автоматически усекаетс€ до ID_MAXSIZE)
		char postfix[ID_MAXSIZE];
		IDDATATYPE iddatatype;//тип данных
		IDTYPE idtype;//тип идентификатора.
		union
		{
			char vbool[6];
			int vint;//значение инт
			struct
			{
				int len;//длина строки стр
				char str[TI_STR_MAXSIZE - 1];//строка
			}vstr[TI_STR_MAXSIZE];//значение стр
		}value;//значение идентификатора
	};
	struct IdTable//экземпл€р таблицы идентификаторов
	{
		int maxsize;//макс емкость таблицы идентификаторов( < TI_MAXSIZE)
		int size;//текущий размер таблицы идентификаторов ( < maxsize)
		Entry* table;//массив строк таблицы идентификаторов
	};
	struct Id
	{
		wchar_t idfile[PARAMETER_MAX_SIZE];
		std::ofstream* stream;
	};
	static const Id FIRSTINIT = { L"", NULL };//дл€ начальной инициализации ID
	Id getid(wchar_t idfile[]);	//сформировать структуру ID
	IdTable Create(int);//создать таблицу идентификаторов(емкость таблицы идентификаторов < TI_MAXSIZE)
	void Add(IdTable&, Entry);//добавить строку в таблицу идентификаторов(idtable, entry)
	Entry GetEntry(IdTable&, int);//получить строку таблицы идентификторов(idtable, номер получаемой строки)
	void Delete(IdTable&);//удалить таблицу лексем(idtable)
	void WriteId(Id id, ID::IdTable& itable); // запись в файл
	void Close(Id id); // закрыть протокол
	void WriteData(Id id); //врем€ создани€
}