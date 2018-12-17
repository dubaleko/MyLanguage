#include "pch.h"
#include "stdafx.h"
#include "LEX.h"
#include"ID.h"
#include <stack>
#include <queue>

using namespace std;

bool PolishNotation(int i, LEX::LexTable& ltable, ID::IdTable& itable)
{
	stack<LEX::Entry> stack;		// стек для операций
	queue<LEX::Entry> queue;		// очередь для операндов
	LEX::Entry temp;				//  все лишние элементы будут заменяться на эту лексему
	temp.indxTI = -1;             // индекс в таблице id
	temp.lexema = '$';
	temp.sn = -1;
	int countLex = 0;			// количество преобразованных лексем
	int posLex = i;				// запоминаем номер лексемы перед преобразованием

	while (ltable.table[i].lexema!= LEX_POINT)
		{
        if(ltable.table[i].lexema ==  LEX_ID)	// если идентификатор
		{
			queue.push(ltable.table[i]);
		}
		if(ltable.table[i].lexema == LEX_LITERAL)		// если литерал
		{
			queue.push(ltable.table[i]);	// помещаем в очередь
		}
		if (ltable.table[i].lexema == LEX_LEFTHESIS)		// если (
		{
			stack.push(ltable.table[i]); // помещаем ее в стек
		}
		if(ltable.table[i].lexema == LEX_RIGHTHESIS)	// если )
		{
			while (stack.top().lexema != LEX_LEFTHESIS)	// пока не встретим (
			{
				queue.push(stack.top());	// выталкиваем со стека в очередь
				stack.pop();

				if (stack.empty())
					return false;
			}
			stack.pop();	// уничтожаем (
		}
		if(ltable.table[i].lexema == LEX_PLUS || ltable.table[i].lexema == LEX_MINUS || ltable.table[i].lexema == LEX_STAR || ltable.table[i].lexema == LEX_DIRSLASH)	// если знак оператора
		{
			while (!stack.empty() && ltable.table[i].priority <= stack.top().priority)	// пока приоритет текущего оператора 
																								//меньше или равен приоритету оператора в вершине стека
			{
				queue.push(stack.top());	// выталкиваем со стека в выходную строку
				stack.pop();
			}
			stack.push(ltable.table[i]);
		}
		i++; countLex++;
		}
	while (!stack.empty())	// если стек не пустой
	{
		if (stack.top().lexema == LEX_LEFTHESIS || stack.top().lexema == LEX_RIGHTHESIS)
			return false;
		queue.push(stack.top());	// выталкиваем все в очередь
		stack.pop();
	}
	while (countLex != 0)		// замена текущего выражения в таблице лексем на выражение в ПОЛИЗ
	{
		if (!queue.empty()) {
			ltable.table[posLex++] = queue.front();
			cout << itable.table[queue.front().indxTI].id;	// вывод в консоль
			queue.pop();
		}
		else
		{
			ltable.table[posLex++] = temp;			// перезапишем символы
		}
		countLex--;
	}
	for (int i = 0; i < posLex; i++)		// восстановление индексов первого вхождения в таблицу лексем у операторов из таблицы идентификаторов
	{
		if (ltable.table[i].lexema == LEX_PLUS || ltable.table[i].lexema == LEX_MINUS || ltable.table[i].lexema == LEX_STAR || ltable.table[i].lexema == LEX_DIRSLASH || ltable.table[i].lexema == LEX_LITERAL)
			itable.table[ltable.table[i].indxTI].idxfirstLE = i;
	}
	return true;
}