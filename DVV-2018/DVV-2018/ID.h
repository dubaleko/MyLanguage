#pragma once
#define TI_TABLE_SIZE 100
#define ID_MAXSIZE 5					//���� ���-�� �������� � ��������������
#define TI_MAXSIZE 1024					//���� ���-�� ����� � ������� ����������������
#define TI_INT_DEFAULT 0x00000000		//�������� �� ��������� ��� ���� ���
#define TI_STR_DEFAULT 0x00				//�������� �� ��������� ��� ���� ���
#define TI_NULLIDX 0xffffffff			//��� �������� ������� ���������������
#define TI_STR_MAXSIZE 255

namespace ID
{
	enum IDDATATYPE
	{
		INT = 1, STR, BOOL 				//���� ������ ���������������
	};
	enum IDTYPE
	{
		V = 1, F, P, L					//��� ��������������(����������, �������, ��������, �������)
	};
	struct Entry
	{
		short idxfirstLE;				//������ ������ ������ � ������� ������
		char id[ID_MAXSIZE * 2];		//�������������(������������� ��������� �� ID_MAXSIZE)
		IDDATATYPE iddatatype;			//��� ������
		IDTYPE idtype;					//��� ��������������
		union
		{
			char vbool[6];
			int vint;					//�������� ���
			struct
			{
				int len;							//����� ������ ���
				char str[TI_STR_MAXSIZE - 1];		//������
			}vstr[TI_STR_MAXSIZE];					//�������� ���
		}value;							//�������� ��������������
	};
	struct IdTable						//��������� ������� ���������������
	{
		int maxsize;					//���� ������� ������� ���������������( < TI_MAXSIZE)
		int size;						//������� ������ ������� ��������������� ( < maxsize)
		Entry* table;					//������ ����� ������� ���������������
	};
	IdTable Create(int);				//������� ������� ���������������(������� ������� ��������������� < TI_MAXSIZE)
	void Add(IdTable&, Entry);			//�������� ������ � ������� ���������������(idtable, entry)
	Entry GetEntry(IdTable&, int);		//�������� ������ ������� ��������������(idtable, ����� ���������� ������)
	int IsId(IdTable&, char id[ID_MAXSIZE]);		//�������: ����� ������(���� ����), TI_NULLIDX(���� ���)(idtable, id)
	void Delete(IdTable&);							//������� ������� ������(idtable)			
}