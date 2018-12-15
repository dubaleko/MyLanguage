#pragma once
#define PARAMETER_IN L"-in:"						//ключ для входного файла
#define PARAMETER_LOG L"-log:"					//для файла протокола
#define PARAMETER_ID L"-id:"	
#define PARAMETER_LEX L"-lx:"
#define PARAMETER_RULE L"-rl"
#define PARAMETER_CSFILE L"-cs"
#define PARAMETER_MAX_SIZE 300					//максимальная длина строки параметра
#define PARAMETER_LOG_FILE_EXTENSION L".log"		//расширение файла протокола по умолчанию
#define PARAMETER_ID_FILE_EXTENSION L".id"
#define PARAMETER_LEX_FILE_EXTENSION L".lx"
#define PARAMETER_RULE_FILE_EXTENSION L".rl"
#define PARAMETER_CS_FILE_EXTENSION L".cs"

namespace Parameter
{
	struct PARAMETER
	{
		wchar_t in[PARAMETER_MAX_SIZE];			//имена файлов
		wchar_t log[PARAMETER_MAX_SIZE];
		wchar_t id[PARAMETER_MAX_SIZE];
		wchar_t lx[PARAMETER_MAX_SIZE];
		wchar_t rl[PARAMETER_MAX_SIZE];
		wchar_t cs[PARAMETER_MAX_SIZE];
	};
	PARAMETER getparametr(int argc, _TCHAR* argv[]);			//формирование структуры PARM на основе параметров main
};