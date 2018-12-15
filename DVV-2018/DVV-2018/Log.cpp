#include "pch.h"
#include "stdafx.h"

namespace Log
{
	LOG getlog(wchar_t logfile[])
	{
		LOG log;
		wcscpy_s(log.logfile, logfile);
		ofstream *FILE = new ofstream;
		(*FILE).open(logfile);
		if (!(*FILE).is_open())
		throw ERROR_THROW(112,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		log.stream = FILE;
		return log;
	}
	void WriteData(LOG log)
	{
		char Date[50];
		struct tm *date;
		const time_t nowtime = time(NULL);
		date = localtime(&nowtime);
		strftime(Date, 50, "%d.%m.%Y %H:%M:%S, %A", date);
		*log.stream << "----�������� log----" << endl;
		*log.stream << "����� �������� ���������: " << Date << endl;
	}
	void WriteParm(LOG log, Parameter::PARAMETER parm)
	{
		char in[PARAMETER_MAX_SIZE], newlog[PARAMETER_MAX_SIZE], id[PARAMETER_MAX_SIZE], lx[PARAMETER_MAX_SIZE], rl[PARAMETER_MAX_SIZE];
		wcstombs(in, parm.in, PARAMETER_MAX_SIZE);
		wcstombs(newlog, parm.log, PARAMETER_MAX_SIZE);
		wcstombs(id, parm.id, PARAMETER_MAX_SIZE);
		wcstombs(lx, parm.lx, PARAMETER_MAX_SIZE);
		wcstombs(rl, parm.rl, PARAMETER_MAX_SIZE);
		*log.stream << "----���������----" << endl;
		*log.stream << "-log: " << newlog << endl;
		*log.stream << "-in: " << in << endl;
		*log.stream << "-id: " << id << endl;
		*log.stream << "-lx: " << lx << endl;
		*log.stream << "-rl: " << rl << endl;
	}
	void WriteIn(LOG log, In::IN in)
	{
		*log.stream << "----�������� ������----" << endl;
		*log.stream << "���������� ��������: " << in.size << endl;
		*log.stream << "���������� �����: " << in.lines << endl;
	}
	void WriteError(LOG log, Error::ERROR e)
	{
	  cout << "������ " << e.id << ": " << e.message << endl << "������: " << e.inext.line << ", ������: " << e.inext.column << endl << endl;
	}
	void Close(LOG log)
	{
		(*log.stream).close();
	}
}