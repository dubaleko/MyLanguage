#pragma once
#include "stdafx.h"

namespace Log
{
	struct LOG
	{
		wchar_t logfile[PARAMETER_MAX_SIZE];
		std::ofstream* stream;
	};
	static const LOG FIRSTINIT = { L"", NULL };			//для начальной инициализации LOG
	LOG getlog(wchar_t logfile[]);						//сформировать структуру LOG
	void WriteLine(LOG log, char* c);				    //вывести в протокол строку
	void WriteData(LOG);								//вывеси дату в заголовок	
	void WriteParm(LOG, Parameter::PARAMETER);		    //вывести информацию о входных параметрах
	void WriteIn(LOG, In::IN);							//инфу о входном файле
	void WriteError(LOG, Error::ERROR);					//информацию об ошибке
	void Close(LOG);									//закрыть программу
	void WriteLex(LOG log, LEX::LexTable& ltable);
	void WriteId(LOG log, ID::IdTable& itable);
};