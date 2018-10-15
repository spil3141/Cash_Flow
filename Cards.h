#pragma once

#include <string.h>

struct Card1 {
	char Small_Deal_Library[5][100];
	int Down_payment;
	int Morgage;
	int CashFlow;
	int Cost;
}Small_Deal_1, Small_Deal_2, Small_Deal_3, Small_Deal_4, Small_Deal_5;


struct Card2 {
	char Big_Deal_Library[5][100];
	int Down_payment;
	int Morgage;
	int CashFlow;
	int Cost;
}Big_Deal_1, Big_Deal_2, Big_Deal_3, Big_Deal_4, Big_Deal_5;

void Small_Deal_Cards(int Index)
{
	int option;
	switch (Index)
	{
	case 1:
		strcpy_s(Small_Deal_1.Small_Deal_Library[0], "10 �����ɽ��� �̰��� ����");
		strcpy_s(Small_Deal_1.Small_Deal_Library[1], "���尡: 30000000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[2], "�����帧: 200000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[3], "����:   4500000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   25500000��");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_1.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_1.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_1.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_1.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_1.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 200000;
			Small_Deal_1.Cost += 30000000;
			Small_Deal_1.Down_payment += 4500000;
			Small_Deal_1.Morgage += 25500000;
		}

		//============  Deduce the Cost from Cash on Hand =============//
		break;
	case 2:
		strcpy_s(Small_Deal_2.Small_Deal_Library[0], "â�� ");
		strcpy_s(Small_Deal_2.Small_Deal_Library[1], "���尡: 50000000��");
		strcpy_s(Small_Deal_2.Small_Deal_Library[2], "�����帧: 100000��");
		strcpy_s(Small_Deal_2.Small_Deal_Library[3], "����:  3500000��");
		strcpy_s(Small_Deal_2.Small_Deal_Library[4], "Morage:  46500000��");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_2.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_2.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_2.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_2.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_2.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 100000;
			Small_Deal_1.Cost += 50000000;
			Small_Deal_1.Down_payment += 3500000;
			Small_Deal_1.Morgage += 46500000;
		}

		//============  Deduce the Cost from Cash on Hand =============//

		break;
	case 3:
		strcpy_s(Small_Deal_3.Small_Deal_Library[0], "�Ű�, �� �� (3��, 2��� )");
		strcpy_s(Small_Deal_3.Small_Deal_Library[1], "���尡: 10000000 ��");
		strcpy_s(Small_Deal_3.Small_Deal_Library[2], "�����帧: 120000��");
		strcpy_s(Small_Deal_3.Small_Deal_Library[3], "����:   4800000 ��");
		strcpy_s(Small_Deal_3.Small_Deal_Library[4], "Morage:   5200000 ��");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_3.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_3.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_3.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_3.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_3.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 120000;
			Small_Deal_1.Cost += 10000000;
			Small_Deal_1.Down_payment += 4800000;
			Small_Deal_1.Morgage += 5200000;
		}

		//============  Deduce the Cost from Cash on Hand =============//
		break;
	case 4:
		strcpy_s(Small_Deal_4.Small_Deal_Library[0], "���� ��ȸ( 3��/ 2 ��� )");
		strcpy_s(Small_Deal_4.Small_Deal_Library[1], "���尡: 35000000��");
		strcpy_s(Small_Deal_4.Small_Deal_Library[2], "�����帧: 220000��");
		strcpy_s(Small_Deal_4.Small_Deal_Library[3], "����: 2000000��");
		strcpy_s(Small_Deal_4.Small_Deal_Library[4], "Morage: 33000000��");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_4.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_4.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_4.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_4.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_4.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 220000;
			Small_Deal_1.Cost += 35000000;
			Small_Deal_1.Down_payment += 2000000;
			Small_Deal_1.Morgage += 33000000;
		}

		//============  Deduce the Cost from Cash on Hand =============//
		break;
	case 5: 
		strcpy_s(Small_Deal_5.Small_Deal_Library[0], "�Ű�, �� ��(2��/1 ��� )");
		strcpy_s(Small_Deal_5.Small_Deal_Library[1], "���尡: 50000000��");
		strcpy_s(Small_Deal_5.Small_Deal_Library[2], "�����帧: 100000��");
		strcpy_s(Small_Deal_5.Small_Deal_Library[3], "����: 5000000��");
		strcpy_s(Small_Deal_5.Small_Deal_Library[4], "Morage: 45000000��");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_5.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_5.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_5.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_5.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_5.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 100000;
			Small_Deal_1.Cost += 50000000;
			Small_Deal_1.Down_payment += 5000000;
			Small_Deal_1.Morgage += 45000000;
		}

		//============  Deduce the Cost from Cash on Hand =============//
		break;
	}
	
}


void Big_Deal_Cards(int Index)
{
	int option;
	switch (Index)
	{
	case 1:
		strcpy_s(Big_Deal_1.Big_Deal_Library[0], "�Ű�, �� ����Ʈ �ǹ�");
		strcpy_s(Big_Deal_1.Big_Deal_Library[1], "���尡 : 57500000��");
		strcpy_s(Big_Deal_1.Big_Deal_Library[2], "�����帧: 3400000 ��");
		strcpy_s(Big_Deal_1.Big_Deal_Library[3], "����: 7500000��");
		strcpy_s(Big_Deal_1.Big_Deal_Library[4], "Morgage:   50000000��");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_1.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_1.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_1.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_1.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_1.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 57500000;
			Small_Deal_1.Cost += 3400000;
			Small_Deal_1.Down_payment += 3400000;
			Small_Deal_1.Morgage += 50000000;
		}
		break;
	case 2:
		strcpy_s(Big_Deal_2.Big_Deal_Library[0], "�� 4-����Ʈ ");
		strcpy_s(Big_Deal_2.Big_Deal_Library[1], "���尡:  100000000��");
		strcpy_s(Big_Deal_2.Big_Deal_Library[2], "�����帧:    800000��");
		strcpy_s(Big_Deal_2.Big_Deal_Library[3], "����:      20000000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   80000000��");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_2.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_2.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_2.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_2.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_2.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 100000000;
			Small_Deal_1.Cost += 800000;
			Small_Deal_1.Down_payment += 20000000;
			Small_Deal_1.Morgage += 80000000;

		}
		break;
	case 3:
		strcpy_s(Big_Deal_3.Big_Deal_Library[0], "�Ű�, �� �� (3��, 2���) ");
		strcpy_s(Big_Deal_3.Big_Deal_Library[1], "���尡: 67000000��");
		strcpy_s(Big_Deal_3.Big_Deal_Library[2], "�����帧: 400000��");
		strcpy_s(Big_Deal_3.Big_Deal_Library[3], "����: 12000000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   25500000��");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_3.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_3.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_3.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_3.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_3.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 67000000;
			Small_Deal_1.Cost += 400000;
			Small_Deal_1.Down_payment += 12000000;
			Small_Deal_1.Morgage += 25500000;

		}
		break;
	case 4:
		strcpy_s(Big_Deal_4.Big_Deal_Library[0], "���� ��ȸ (3��/ 2 ���)");
		strcpy_s(Big_Deal_4.Big_Deal_Library[1], "���尡: 35000000��");
		strcpy_s(Big_Deal_4.Big_Deal_Library[2], "�����帧: 220000��");
		strcpy_s(Big_Deal_4.Big_Deal_Library[3], "����: 2000000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   33000000��");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_4.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_4.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_4.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_4.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_4.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 35000000;
			Small_Deal_1.Cost += 220000;
			Small_Deal_1.Down_payment += 2000000;
			Small_Deal_1.Morgage += 33000000;

		}
		break;
	case 5:
		strcpy_s(Big_Deal_5.Big_Deal_Library[0], "�� ������ (2��/1 ���)");
		strcpy_s(Big_Deal_5.Big_Deal_Library[1], "���尡: 350000000��");
		strcpy_s(Big_Deal_5.Big_Deal_Library[2], "�����帧: 1500000��");
		strcpy_s(Big_Deal_5.Big_Deal_Library[3], "����: 50000000��");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   300000000��");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_5.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_5.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_5.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_5.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_5.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4��ư : ����          6 ��ư: �������� �ʴ�");
		option = _getch();
		if (option == FOUR)
		{
			Small_Deal_1.CashFlow += 350000000;
			Small_Deal_1.Cost += 1500000;
			Small_Deal_1.Down_payment += 50000000;
			Small_Deal_1.Morgage += 300000000;

		}
		break;
	
	}
}

