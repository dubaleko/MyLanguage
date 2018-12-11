#pragma once
#pragma warning(disable: 4996)
namespace SA
{
	void ZeroDivision( LEX::LexTable& lextable, char* literal);
	void OneDvv(LEX::LexTable& ltable, bool flag);
	void Parametrs(LEX::LexTable& ltable);
	void TypeofParameters(LEX::LexTable& ltable, ID::IdTable& itable);
	void Inicial(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, ID::IDDATATYPE datatype, int line, int col);
	void InicialId(LEX::LexTable& ltable, ID::IdTable& itable);
	void BoolLt(LEX::LexTable& ltable, ID::IdTable& itable);
	void Operation(LEX::LexTable& ltable, ID::IdTable& itable);
	void Operationl(LEX::LexTable& ltable, ID::IdTable& itable);
}