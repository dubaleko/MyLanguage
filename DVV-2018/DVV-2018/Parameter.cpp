#include "pch.h"
#include "stdafx.h"

namespace Parameter
{
	PARAMETER getparametr(int argc, _TCHAR* argv[])									//argc - �� ��������� �������
	{
		PARAMETER Parametr;
		wchar_t in[PARAMETER_MAX_SIZE], log[PARAMETER_MAX_SIZE];
		if (argc == 1)
		throw ERROR_THROW(100,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		wchar_t *parameterIn = wcsstr(argv[1], PARAMETER_IN);	// parameterIn - ��������� �� ������ ��������� ������ PARM_IN � ������ argv[1], ��� ������ ���������
		if (!parameterIn)
		throw ERROR_THROW(100,ERROR_ZERO_LINE, ERROR_ZERO_COL);
		if (wcslen(argv[1]) > PARAMETER_MAX_SIZE)
		throw ERROR_THROW(104,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		wcscpy_s(in, parameterIn + wcslen(PARAMETER_IN));	// ����� ��������� �� wcslen(PARM_IN) ���-�� �������� � ����������� ���������� ������ � ������ in
		wcscpy_s(Parametr.in, in);
		if (argc < 3) {
			wcscpy_s(log, in);
			wcscat_s(log, PARAMETER_MAX_SIZE, PARAMETER_LOG_FILE_EXTENSION);
			wcscpy_s(Parametr.log, log);
		}
		else {
			if (wcslen(argv[3]) > PARAMETER_MAX_SIZE)
			throw ERROR_THROW(104,ERROR_ZERO_LINE,ERROR_ZERO_COL);
			wcscpy_s(log, argv[3] + wcslen(PARAMETER_LOG));
			wcscpy_s(Parametr.log, log);
		}
		return Parametr;
	}
};