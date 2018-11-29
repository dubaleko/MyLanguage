#pragma once
#define LT_TABLE_SIZE 300
#define LT_MAXSIZE 4096					//������������ ���-�� ����� � ������� ������
#define LT_TI_NULLIDX 0xffffffff		//��� ��-�� ������� ����������������
#define LEX_INTEGER 'i'
#define LEX_STRING 's'
#define LEX_BOOL 'b'
#define LEX_ID 'd'
#define LEX_LITERAL 'l'
#define LEX_MAIN 'm'
#define LEX_FUNCTION 'f'
#define LEX_IF 'w'
#define LEX_ELSE 'e'
#define LEX_RETURN 'r'
#define LEX_PRINT 'p'
#define LEX_SEMICOLON ';'
#define LEX_COMMA ','
#define LEX_LEFTBRACE '{'
#define LEX_RIGHTBRACE '}'
#define LEX_LEFTHESIS '('
#define LEX_RIGHTHESIS ')'
#define LEX_MORE '>'
#define LEX_LESS '<'
#define LEX_EQUALLY '='
#define LEX_COMPARE ':'
#define LEX_PLUS '+'
#define LEX_MINUS '-'
#define LEX_STAR '*'
#define LEX_DIRSLASH '/'
#define LEX_SIGN 'v'
#define LEX_ENDL '\n'
#define LEX_END '\0'
#define LEX_SPACE ' '


namespace LEX
{
	struct Entry						//������ ������� ������
	{
		char lexema;
		int sn;							//����� ������ � ������
		int indxTI;						//������ � ������� ��������������� ��� LT_TI_NULLIDX
	};

	struct LexTable						//�������� ������� ������
	{
		int maxsize;					//������� ������� ������( < LT_MAXSIZE)
		int size;						//������� ������ ������� ������ ( < maxsize)
		Entry* table;					//������ ����� ������� ������
	};
	LexTable Create(int);				//������� ������� ������(������� ������� ������ < LT_MAXSIZE)
	void Add(LexTable&, Entry&);		//�������� ������ � ������� ������(lextable, entry)
	Entry GetEntry(LexTable&, int);		//�������� ������ ������� ������(lextable, '����� ���������� ������')
	void Delete(LexTable&);				//������� ������� ������
}
