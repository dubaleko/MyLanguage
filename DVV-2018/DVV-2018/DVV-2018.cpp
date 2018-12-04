// DVV-2018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	char q1[] = "Тест компилятора языка DVV-2018 был выполнен без ошибок ";
	Log::LOG log = Log::FIRSTINIT;
	ID::Id id = ID::FIRSTINIT;
	LEX::Lex lx = LEX::FIRSTINIT;
	MFST::Rl rl = MFST::FIRSTINIT;
	LEX::LexTable ltable = LEX::Create(LT_TABLE_SIZE);
	ID::IdTable itable = ID::Create(TI_TABLE_SIZE);
	try
	{
		Parameter::PARAMETER parametr = Parameter::getparametr(argc, argv);
		log = Log::getlog(parametr.log);
		id = ID::getid(parametr.id);
		lx = LEX::getlex(parametr.lx);
		rl = MFST::getrul(parametr.rl);
		Log::WriteLine(log, q1);
		Log::WriteData(log);
		Log::WriteParm(log, parametr);
		In::IN in = In::getin(parametr.in);
		Log::WriteIn(log, in);
		LA::Lexicalanaliz((char*)in.text, log, ltable, itable);
		LEX::WriteData(lx);
		LEX::WriteLex(lx, ltable);
		ID::WriteData(id);
		ID::WriteId(id, itable);
		MFST::WriteData(rl);
		MFST_TRACE_START(rl);
		MFST::Mfst mfst(ltable, GRB::getGreibach(), rl);
		mfst.start();
		mfst.savededucation();
		mfst.printrules();
		ID::Delete(itable);
		LEX::Delete(ltable);
	}
	catch (Error::ERROR e)
	{
		Log::WriteError(log, e);
	}
	Log::Close(log);
	LEX::Close(lx);
	ID::Close(id);
	cout << "Протоколы созданы" << endl;
	system("pause");
	return 0;
}