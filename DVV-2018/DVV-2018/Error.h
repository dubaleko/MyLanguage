#pragma once
#define ERROR_THROW(id, l, c) Error:: geterror(id, l, c);		//(id, строка, колонка)
#define ERROR_ENTRY(id, message) {id, message}						//элемент таблицы ошибок
#define ERROR_MAXSIZE_MESSAGE 200
#define ERROR_ENTRY_NODEF(id)	ERROR_ENTRY(id, "Неопределенная ошибка")		//1 непределенный элемент таблицы ошибок
// ERROR_ENTRY_NODEF10(id)	-	10 неопределенных элементов таблицы ошибок
#define ERROR_ENTRY_NODEF10(id)	ERROR_ENTRY_NODEF(id+0), ERROR_ENTRY_NODEF(id+1), ERROR_ENTRY_NODEF(id+2), ERROR_ENTRY_NODEF(id+3),	\
								ERROR_ENTRY_NODEF(id+4), ERROR_ENTRY_NODEF(id+5), ERROR_ENTRY_NODEF(id+6), ERROR_ENTRY_NODEF(id+7),\
								ERROR_ENTRY_NODEF(id+8), ERROR_ENTRY_NODEF(id+9)

#define ERROR_ENTRY_NODEF100(id) ERROR_ENTRY_NODEF10(id + 0), ERROR_ENTRY_NODEF10(id + 10), ERROR_ENTRY_NODEF10(id + 20), ERROR_ENTRY_NODEF10(id + 30), \
								 ERROR_ENTRY_NODEF10(id + 40), ERROR_ENTRY_NODEF10(id + 50), ERROR_ENTRY_NODEF10(id + 60), ERROR_ENTRY_NODEF10(id + 70), \
								 ERROR_ENTRY_NODEF10(id + 80), ERROR_ENTRY_NODEF10(id + 90)

#define ERROR_MAX_ENTRY 1000						//количество элементов в таблице ошибок
#define ERROR_ZERO_LINE 0
#define ERROR_ZERO_COL 0

namespace Error
{
	struct ERROR					//тип исключения для throw ERROR_THROW
	{
		int id;
		char message[ERROR_MAXSIZE_MESSAGE];
		struct IN					//расширение для ошбиок при обработке входных данных
		{
			short line;
			short column;
		} inext;
	};
	ERROR geterror(int, int, int);					//сформировать ERROR для ERROR_THROW_IN
};