#pragma once
#pragma warning(disable: 4996)
namespace SA
{
	void ZeroDivision( LEX::LexTable& lextable, char* literal);
	void OneDvv(LEX::LexTable& ltable, bool flag);
	void BoolLt(LEX::LexTable& ltable, ID::IdTable& itable);
	void Operation(LEX::LexTable& ltable, ID::IdTable& itable);
	void Operationl(LEX::LexTable& ltable, ID::IdTable& itable);
	void Proverka(LEX::LexTable& ltable, ID::IdTable& itable);
	void Pereobyavl(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, char* post, int line, int col);
	void RetValue(LEX::LexTable& ltable, ID::IdTable& itable);
	void InicialId(LEX::LexTable& ltable, ID::IdTable& itable);
	void Inicial(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, ID::IDDATATYPE dtype, int line, int col);
	void Parametrs(LEX::LexTable& ltable);
	void TypeofParameters(LEX::LexTable& ltable, ID::IdTable& itable);
}