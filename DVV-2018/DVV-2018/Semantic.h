#pragma once
#pragma warning(disable: 4996)
namespace SA
{
	void ZeroDivision( LEX::LexTable& lextable, char* literal);
	void BoolLT(LEX::LexTable& lextable, ID::IDDATATYPE datatype);
	void OneDvv(LEX::LexTable& ltable, bool flag);
	void Inicial(LEX::LexTable& ltable, ID::IdTable& itable, char* buf, ID::IDDATATYPE datatype);
	void Parametrs(LEX::LexTable& ltable);
	void TypeofData(LEX::LexTable& ltable, ID::IdTable& itable, char* bus);
}