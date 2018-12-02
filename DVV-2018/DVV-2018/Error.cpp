#include "pch.h"
#include "stdafx.h"
namespace Error
{
	ERROR errors[ERROR_MAX_ENTRY] =
	{
		ERROR_ENTRY(0, "Недопустимый код ошибки"),
		ERROR_ENTRY(1, "Системный сбой"),
		ERROR_ENTRY(2, "Недопустимый синтаксис"), ERROR_ENTRY(3, "Отсутствует таблица лексем"), ERROR_ENTRY(4, "Отсутствует таблица идентификаторов"), ERROR_ENTRY(5,"Недопустимы номер возращаемой строки таблицы лексем"),
		ERROR_ENTRY(6,"Недопустимый номер возвращаемой строки таблицы идентификаторов"), ERROR_ENTRY(7, "Превышено максимальное значение целочисленного литерала"), ERROR_ENTRY(8, "Размер длины строки превышен(256)"), ERROR_ENTRY_NODEF(9),
		ERROR_ENTRY_NODEF(10), ERROR_ENTRY_NODEF10(20), ERROR_ENTRY_NODEF10(30), ERROR_ENTRY_NODEF10(40), ERROR_ENTRY_NODEF10(50),
		ERROR_ENTRY_NODEF10(60), ERROR_ENTRY_NODEF10(70), ERROR_ENTRY_NODEF10(80), ERROR_ENTRY_NODEF10(90),
		ERROR_ENTRY(100, "Параметр -in должен быть задан"),
		ERROR_ENTRY_NODEF(101), ERROR_ENTRY_NODEF(102), ERROR_ENTRY_NODEF(103),
		ERROR_ENTRY(104, "Превышена длина входного параметра"),
		ERROR_ENTRY_NODEF(105), ERROR_ENTRY_NODEF(106), ERROR_ENTRY(107,"Ошибка при создании файла протокола (-rl)"),
		ERROR_ENTRY(108, "Ошибка при создании файла протокола (-in)"), ERROR_ENTRY(109,"Ошибка при создании файла протокола (-lex)" ),
		ERROR_ENTRY(110, "Ошибка при открытии файла с исходным кодом (-in)"),
		ERROR_ENTRY(111, "Недопустимый символ в исходном файле (-in)"),
		ERROR_ENTRY(112, "Ошибка при создании файла протокола (-log)"),
		ERROR_ENTRY(113, "Превышен максимальный размер таблицы лексем"), ERROR_ENTRY(114, "Превышен максимальный размер таблицы идентификаторов"), ERROR_ENTRY_NODEF(115), ERROR_ENTRY_NODEF(116),
		ERROR_ENTRY_NODEF(117), ERROR_ENTRY_NODEF(118), ERROR_ENTRY_NODEF(119),
		ERROR_ENTRY_NODEF10(20), ERROR_ENTRY_NODEF10(30), ERROR_ENTRY_NODEF10(40), ERROR_ENTRY_NODEF10(50),
		ERROR_ENTRY_NODEF10(60), ERROR_ENTRY_NODEF10(70), ERROR_ENTRY_NODEF10(80), ERROR_ENTRY_NODEF10(90),
		ERROR_ENTRY_NODEF100(200), ERROR_ENTRY_NODEF100(300), ERROR_ENTRY_NODEF100(400), ERROR_ENTRY_NODEF100(500),
		ERROR_ENTRY_NODEF100(600), ERROR_ENTRY_NODEF100(700), ERROR_ENTRY_NODEF100(800), ERROR_ENTRY_NODEF100(900),
	};
	ERROR geterror(int id, int line, int col)
	{
		for (int i = 0; i < ERROR_MAX_ENTRY - 1; i++)
		if (errors[i].id == id)
		{
		 errors[i].inext.line = line;
		 errors[i].inext.column = col;
		 return errors[i];
		}
		return errors[0];
	}
};