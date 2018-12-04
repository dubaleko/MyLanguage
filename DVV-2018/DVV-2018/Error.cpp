#include "pch.h"
#include "stdafx.h"
namespace Error
{
	ERROR errors[ERROR_MAX_ENTRY] =
	{
		ERROR_ENTRY(100, "�������� -in ������ ���� �����"), ERROR_ENTRY(104, "��������� ����� �������� ���������"),
		
		ERROR_ENTRY(107,"������ ��� �������� ����� ��������� (-rl)"), ERROR_ENTRY(108, "������ ��� �������� ����� ��������� (-in)"), ERROR_ENTRY(109,"������ ��� �������� ����� ��������� (-lex)" ),
		ERROR_ENTRY(110, "������ ��� �������� ����� � �������� ����� (-in)"), ERROR_ENTRY(111, "������������ ������ � �������� ����� (-in)"), ERROR_ENTRY(112, "������ ��� �������� ����� ��������� (-log)"),

		ERROR_ENTRY(113, "�������� ������������ ������ ������� ������"), ERROR_ENTRY(114, "�������� ������������ ������ ������� ���������������"), 
		ERROR_ENTRY(115,"����������� ����� ������������ ������ ������� ������"), ERROR_ENTRY(117,"����������� ������� ������"), ERROR_ENTRY(118,"����������� ������� ���������������"), 
		ERROR_ENTRY(119,"������������ ����� ������������ ������ ������� ���������������"),ERROR_ENTRY(120,"������ ����� ������ ��������(256)"),ERROR_ENTRY(121, "��������� ������������ �������� �������������� ��������"),

		ERROR_ENTRY(600, "�������� ��������� ���������"), ERROR_ENTRY(601, "������ � ����������� �����"), ERROR_ENTRY(602, "������ ���������"), ERROR_ENTRY(603, "������ ���������"),
        ERROR_ENTRY(604, "������ �  ���� if"), ERROR_ENTRY(605, "������  ����� � ���������"), ERROR_ENTRY(606, "������ ����� � ���������"), ERROR_ENTRY(607, "������ � ������� if"),
		ERROR_ENTRY_NODEF100(700), ERROR_ENTRY_NODEF100(800), ERROR_ENTRY_NODEF100(900),
	};
	ERROR geterror(int id, int line, int col)
	{
		for (int i = 0; i < ERROR_MAX_ENTRY - 1; i++)
		if (errors[i].id == id)
		{
		 errors[i].inext.line = line;
		 errors[i].inext.column = col;
		 return errors[i];
		}
		return errors[0];
	}
};