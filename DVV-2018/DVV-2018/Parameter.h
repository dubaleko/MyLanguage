#pragma once
#define PARAMETER_IN L"-in:"						//ключ для входного файла
#define PARAMETER_LOG L"-log:"					//для файла протокола
#define PARAMETER_MAX_SIZE 300					//максимальная длина строки параметра
#define PARAMETER_LOG_FILE_EXTENSION L".log"		//расширение файла протокола по умолчанию

namespace Parameter
{
	struct PARAMETER
	{
		wchar_t in[PARAMETER_MAX_SIZE];			//имена файлов
		wchar_t log[PARAMETER_MAX_SIZE];
	};
	PARAMETER getparametr(int argc, _TCHAR* argv[]);			//формирование структуры PARM на основе параметров main
};