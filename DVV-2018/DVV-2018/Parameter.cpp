#include "pch.h"
#include "stdafx.h"

namespace Parameter
{
	PARAMETER getparametr(int argc, _TCHAR* argv[])									//argc - �� ��������� �������
	{
		PARAMETER Parametr;
		wchar_t in[PARAMETER_MAX_SIZE], log[PARAMETER_MAX_SIZE], id[PARAMETER_MAX_SIZE], lx[PARAMETER_MAX_SIZE], rl[PARAMETER_MAX_SIZE];
		if (argc == 1)
		throw ERROR_THROW(100,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		wchar_t *parameterIn = wcsstr(argv[1], PARAMETER_IN);	// parameterIn - ��������� �� ������ ��������� ������ PARM_IN � ������ argv[1], ��� ������ ���������
		if (!parameterIn)
		throw ERROR_THROW(100,ERROR_ZERO_LINE, ERROR_ZERO_COL);
		if (wcslen(argv[1]) > PARAMETER_MAX_SIZE)
		throw ERROR_THROW(104,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		wcscpy_s(in, parameterIn + wcslen(PARAMETER_IN));	// ����� ��������� �� wcslen(PARM_IN) ���-�� �������� � ����������� ���������� ������ � ������ in
		wcscpy_s(Parametr.in, in);
		if (argc <= 3) {
			wcscpy_s(log, in);
			wcscat_s(log, PARAMETER_MAX_SIZE, PARAMETER_LOG_FILE_EXTENSION);
			wcscpy_s(Parametr.log, log);

			wcscpy_s(id, in);
			wcscat_s(id, PARAMETER_MAX_SIZE, PARAMETER_ID_FILE_EXTENSION);
			wcscpy_s(Parametr.id, id);

			wcscpy_s(lx, in);
			wcscat_s(lx, PARAMETER_MAX_SIZE, PARAMETER_LEX_FILE_EXTENSION);
			wcscpy_s(Parametr.lx, lx);

			wcscpy_s(rl , in);
			wcscat_s(rl, PARAMETER_MAX_SIZE, PARAMETER_RULE_FILE_EXTENSION);
			wcscpy_s(Parametr.rl, rl);
		}
		else {
			if (wcslen(argv[3]) > PARAMETER_MAX_SIZE)
			throw ERROR_THROW(104,ERROR_ZERO_LINE,ERROR_ZERO_COL);
		}
		return Parametr;
	}
};