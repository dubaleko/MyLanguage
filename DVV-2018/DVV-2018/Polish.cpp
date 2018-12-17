#include "pch.h"
#include "stdafx.h"
#include "LEX.h"
#include"ID.h"
#include <stack>
#include <queue>

using namespace std;

bool PolishNotation(int i, LEX::LexTable& ltable, ID::IdTable& itable)
{
	stack<LEX::Entry> stack;		// ���� ��� ��������
	queue<LEX::Entry> queue;		// ������� ��� ���������
	LEX::Entry temp;				//  ��� ������ �������� ����� ���������� �� ��� �������
	temp.indxTI = -1;             // ������ � ������� id
	temp.lexema = '$';
	temp.sn = -1;
	int countLex = 0;			// ���������� ��������������� ������
	int posLex = i;				// ���������� ����� ������� ����� ���������������

	while (ltable.table[i].lexema!= LEX_POINT)
		{
        if(ltable.table[i].lexema ==  LEX_ID)	// ���� �������������
		{
			queue.push(ltable.table[i]);
		}
		if(ltable.table[i].lexema == LEX_LITERAL)		// ���� �������
		{
			queue.push(ltable.table[i]);	// �������� � �������
		}
		if (ltable.table[i].lexema == LEX_LEFTHESIS)		// ���� (
		{
			stack.push(ltable.table[i]); // �������� �� � ����
		}
		if(ltable.table[i].lexema == LEX_RIGHTHESIS)	// ���� )
		{
			while (stack.top().lexema != LEX_LEFTHESIS)	// ���� �� �������� (
			{
				queue.push(stack.top());	// ����������� �� ����� � �������
				stack.pop();

				if (stack.empty())
					return false;
			}
			stack.pop();	// ���������� (
		}
		if(ltable.table[i].lexema == LEX_PLUS || ltable.table[i].lexema == LEX_MINUS || ltable.table[i].lexema == LEX_STAR || ltable.table[i].lexema == LEX_DIRSLASH)	// ���� ���� ���������
		{
			while (!stack.empty() && ltable.table[i].priority <= stack.top().priority)	// ���� ��������� �������� ��������� 
																								//������ ��� ����� ���������� ��������� � ������� �����
			{
				queue.push(stack.top());	// ����������� �� ����� � �������� ������
				stack.pop();
			}
			stack.push(ltable.table[i]);
		}
		i++; countLex++;
		}
	while (!stack.empty())	// ���� ���� �� ������
	{
		if (stack.top().lexema == LEX_LEFTHESIS || stack.top().lexema == LEX_RIGHTHESIS)
			return false;
		queue.push(stack.top());	// ����������� ��� � �������
		stack.pop();
	}
	while (countLex != 0)		// ������ �������� ��������� � ������� ������ �� ��������� � �����
	{
		if (!queue.empty()) {
			ltable.table[posLex++] = queue.front();
			cout << itable.table[queue.front().indxTI].id;	// ����� � �������
			queue.pop();
		}
		else
		{
			ltable.table[posLex++] = temp;			// ����������� �������
		}
		countLex--;
	}
	for (int i = 0; i < posLex; i++)		// �������������� �������� ������� ��������� � ������� ������ � ���������� �� ������� ���������������
	{
		if (ltable.table[i].lexema == LEX_PLUS || ltable.table[i].lexema == LEX_MINUS || ltable.table[i].lexema == LEX_STAR || ltable.table[i].lexema == LEX_DIRSLASH || ltable.table[i].lexema == LEX_LITERAL)
			itable.table[ltable.table[i].indxTI].idxfirstLE = i;
	}
	return true;
}