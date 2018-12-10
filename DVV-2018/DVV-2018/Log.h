#pragma once
#include "stdafx.h"

namespace Log
{
	struct LOG
	{
		wchar_t logfile[PARAMETER_MAX_SIZE];
		std::ofstream* stream;
	};
	static const LOG FIRSTINIT = { L"", NULL };			//��� ��������� ������������� LOG
	LOG getlog(wchar_t logfile[]);						//������������ ��������� LOG
	void WriteData(LOG);								//������ ���� � ���������	
	void WriteParm(LOG, Parameter::PARAMETER);		    //������� ���������� � ������� ����������
	void WriteIn(LOG, In::IN);							//���� � ������� �����
	void WriteError(LOG, Error::ERROR);					//���������� �� ������
	void Close(LOG);									//������� ���������
};