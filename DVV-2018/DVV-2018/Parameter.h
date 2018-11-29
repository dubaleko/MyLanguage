#pragma once
#define PARAMETER_IN L"-in:"						//���� ��� �������� �����
#define PARAMETER_LOG L"-log:"					//��� ����� ���������
#define PARAMETER_MAX_SIZE 300					//������������ ����� ������ ���������
#define PARAMETER_LOG_FILE_EXTENSION L".log"		//���������� ����� ��������� �� ���������

namespace Parameter
{
	struct PARAMETER
	{
		wchar_t in[PARAMETER_MAX_SIZE];			//����� ������
		wchar_t log[PARAMETER_MAX_SIZE];
	};
	PARAMETER getparametr(int argc, _TCHAR* argv[]);			//������������ ��������� PARM �� ������ ���������� main
};