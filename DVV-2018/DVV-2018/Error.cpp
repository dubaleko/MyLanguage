#include "pch.h"
#include "stdafx.h"
namespace Error
{
	ERROR errors[ERROR_MAX_ENTRY] =
	{
		ERROR_ENTRY(100, "Параметр -in должен быть задан"), ERROR_ENTRY(104, "Превышена длина входного параметра"),
		
		ERROR_ENTRY(107,"Ошибка при создании файла протокола (-rl)"), ERROR_ENTRY(108, "Ошибка при создании файла протокола (-in)"), ERROR_ENTRY(109,"Ошибка при создании файла протокола (-lex)" ),
		ERROR_ENTRY(110, "Ошибка при открытии файла с исходным кодом (-in)"), ERROR_ENTRY(111, "Недопустимый символ в исходном файле (-in)"), ERROR_ENTRY(112, "Ошибка при создании файла протокола (-log)"),

		ERROR_ENTRY(113, "Превышен максимальный размер таблицы лексем"), ERROR_ENTRY(114, "Превышен максимальный размер таблицы идентификаторов"), 
		ERROR_ENTRY(115,"Недопустимы номер возвращаемой строки таблицы лексем"), ERROR_ENTRY(117,"Отсутствует таблица лексем"), ERROR_ENTRY(118,"Отсутствует таблица идентификаторов"), 
		ERROR_ENTRY(119,"Недопустимый номер возвращаемой строки таблицы идентификаторов"),ERROR_ENTRY(120,"Размер длины строки превышен(256)"),ERROR_ENTRY(121, "Превышено максимальное значение целочисленного литерала"),

		ERROR_ENTRY(600, "Неверная структура программы"), ERROR_ENTRY(601, "Ошибка в конструкции языка"), ERROR_ENTRY(602, "Ошибка операндов"), ERROR_ENTRY(603, "Ошибка выражения"),
        ERROR_ENTRY(604, "Ошибка в  теле if"), ERROR_ENTRY(605, "Ошибка  знака в выражении"), ERROR_ENTRY(606, "Ошибка знака в сравнении"), ERROR_ENTRY(607, "Ошибка в условии if"),
		ERROR_ENTRY_NODEF100(700), ERROR_ENTRY_NODEF100(800), ERROR_ENTRY_NODEF100(900),
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