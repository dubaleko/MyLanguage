#include "pch.h"
#include "stdafx.h"

namespace Log
{
	LOG getlog(wchar_t logfile[])
	{
		LOG log;
		wcscpy_s(log.logfile, logfile);
		ofstream *FILE = new ofstream;
		(*FILE).open(logfile, ios_base::out, ios_base::trunc);
		if (!(*FILE).is_open())
		throw ERROR_THROW(112,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		log.stream = FILE;
		return log;
	}
	void WriteLine(LOG log, char* txt)
	{
		*log.stream << txt << endl;
	}
	void WriteData(LOG log)
	{
		char Date[50];
		struct tm *date;
		const time_t nowtime = time(NULL);
		date = localtime(&nowtime);
		strftime(Date, 50, "%d.%m.%Y %H:%M:%S, %A", date);
		*log.stream << "----Протокол----" << endl;
		*log.stream << "Время создания протокола: " << Date << endl;

	}
	void WriteParm(LOG log, Parameter::PARAMETER parm)
	{
		char in[PARAMETER_MAX_SIZE], newlog[PARAMETER_MAX_SIZE];
		wcstombs(in, parm.in, PARAMETER_MAX_SIZE);
		wcstombs(newlog, parm.log, PARAMETER_MAX_SIZE);
		*log.stream << "----Параметры----" << endl;
		*log.stream << "-log: " << newlog << endl;
		*log.stream << "-in: " << in << endl << endl;
	}
	void WriteIn(LOG log, In::IN in)
	{
		*log.stream << "----Исходные данные----" << endl;
		*log.stream << "Количество символов: " << in.size << endl;
		*log.stream << "Количество строк: " << in.lines << endl;
	}
	void WriteError(LOG log, Error::ERROR e)
	{
		if (!log.stream)
			cout << "Ошибка " << e.id << ": " << e.message << endl << "Строка: " << e.inext.line << ", символ: " << e.inext.column << endl << endl;
		else
		{
			cout << "Ошибка " << e.id << ": " << e.message << endl << "Строка: " << e.inext.line << ", символ: " << e.inext.column << endl << endl;
			*log.stream << "Ошибка " << e.id << ": " << e.message << endl << "Строка: " << e.inext.line << ", символ: " << e.inext.column << endl;
		}
	}
	void Close(LOG log)
	{
		(*log.stream).close();
	}
	void WriteLex(LOG log, LEX::LexTable& ltable)
	{
		*log.stream << "  Таблица лексем:\n";
		unsigned int compLine = -1;
		for (unsigned int i = 0; i < (unsigned int)ltable.size; i++)
		{
			if (compLine != ltable.table[i].sn)
			{
				*log.stream << endl << ltable.table[i].sn << ".\t";
				compLine = ltable.table[i].sn;
			}
			*log.stream << ltable.table[i].lexema;
		}
		*log.stream << "\n\n";
	}

	void WriteId(LOG log, ID::IdTable& itable)
	{
		*log.stream << "\tТаблица идентификаторов:\n";
		*log.stream << "Строка\tТип Id\t\tТип переменной\tИмя\tЗначение\n";
		for (unsigned int i = 0; i < (unsigned int)itable.size; i++)
		{
			*log.stream << itable.table[i].idxfirstLE << "\t" << itable.table[i].idtype << "\t\t" << itable.table[i].iddatatype << "\t\t" << itable.table[i].id << "\t";
			if (itable.table[i].iddatatype == ID::INT)
				*log.stream << itable.table[i].value.vint;
			else if (itable.table[i].iddatatype == ID::STR)
				*log.stream << itable.table[i].value.vstr->str;
			else if (itable.table[i].iddatatype == ID::BOOL)
				*log.stream << itable.table[i].value.vbool;
			*log.stream << endl;
		}
		*log.stream << "Тип ID  1- переменная, 2- функция, 3- параметр, 4- литерал" << endl;
		*log.stream << "Тип переменной 1- integer, 2- string, 3 - bool";
		*log.stream << "\n\n";
	}
}