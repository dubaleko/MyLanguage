#pragma once
#pragma warning(disable: 4996)
namespace SA
{
	void ZeroDivision( LEX::LexTable& lextable, char* literal);
	void OneDvv(LEX::LexTable& ltable, bool flag);
	void Parametrs(LEX::LexTable& ltable);
	void TypeofParameters(LEX::LexTable& ltable, ID::IdTable& itable, ID::IDDATATYPE idtype, char* buffer, int x, int y);
	void BoolLT(LEX::LexTable& ltable, ID::IdTable& itable, ID::IDDATATYPE datatype, char* buffer, int x, int y);
	void Inicial(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, ID::IDDATATYPE datatype, int line , int col);
}