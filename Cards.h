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
		strcpy_s(Small_Deal_1.Small_Deal_Library[0], "10 에이케스의 미개발 토지");
		strcpy_s(Small_Deal_1.Small_Deal_Library[1], "시장가: 30000000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[2], "현금흐름: 200000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[3], "가격:   4500000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   25500000원");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_1.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_1.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_1.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_1.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_1.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Small_Deal_2.Small_Deal_Library[0], "창업 ");
		strcpy_s(Small_Deal_2.Small_Deal_Library[1], "시장가: 50000000원");
		strcpy_s(Small_Deal_2.Small_Deal_Library[2], "현금흐름: 100000원");
		strcpy_s(Small_Deal_2.Small_Deal_Library[3], "가격:  3500000원");
		strcpy_s(Small_Deal_2.Small_Deal_Library[4], "Morage:  46500000원");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_2.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_2.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_2.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_2.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_2.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Small_Deal_3.Small_Deal_Library[0], "매가, 팔 집 (3방, 2욕실 )");
		strcpy_s(Small_Deal_3.Small_Deal_Library[1], "시장가: 10000000 원");
		strcpy_s(Small_Deal_3.Small_Deal_Library[2], "현금흐름: 120000원");
		strcpy_s(Small_Deal_3.Small_Deal_Library[3], "가격:   4800000 원");
		strcpy_s(Small_Deal_3.Small_Deal_Library[4], "Morage:   5200000 원");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_3.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_3.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_3.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_3.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_3.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Small_Deal_4.Small_Deal_Library[0], "좋은 기회( 3방/ 2 욕실 )");
		strcpy_s(Small_Deal_4.Small_Deal_Library[1], "시장가: 35000000원");
		strcpy_s(Small_Deal_4.Small_Deal_Library[2], "현금흐름: 220000원");
		strcpy_s(Small_Deal_4.Small_Deal_Library[3], "가격: 2000000원");
		strcpy_s(Small_Deal_4.Small_Deal_Library[4], "Morage: 33000000원");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_4.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_4.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_4.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_4.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_4.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Small_Deal_5.Small_Deal_Library[0], "매가, 팔 집(2방/1 욕실 )");
		strcpy_s(Small_Deal_5.Small_Deal_Library[1], "시장가: 50000000원");
		strcpy_s(Small_Deal_5.Small_Deal_Library[2], "현금흐름: 100000원");
		strcpy_s(Small_Deal_5.Small_Deal_Library[3], "가격: 5000000원");
		strcpy_s(Small_Deal_5.Small_Deal_Library[4], "Morage: 45000000원");

		settextcolor("PURPLE");
		gotoxytext(55, 23, Small_Deal_5.Small_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Small_Deal_5.Small_Deal_Library[1]);
		gotoxytext(52, 26, Small_Deal_5.Small_Deal_Library[2]);
		gotoxytext(52, 27, Small_Deal_5.Small_Deal_Library[3]);
		gotoxytext(52, 28, Small_Deal_5.Small_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Big_Deal_1.Big_Deal_Library[0], "매가, 팔 아파트 건물");
		strcpy_s(Big_Deal_1.Big_Deal_Library[1], "시장가 : 57500000원");
		strcpy_s(Big_Deal_1.Big_Deal_Library[2], "현금흐름: 3400000 원");
		strcpy_s(Big_Deal_1.Big_Deal_Library[3], "가격: 7500000원");
		strcpy_s(Big_Deal_1.Big_Deal_Library[4], "Morgage:   50000000원");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_1.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_1.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_1.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_1.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_1.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Big_Deal_2.Big_Deal_Library[0], "팔 4-아파트 ");
		strcpy_s(Big_Deal_2.Big_Deal_Library[1], "시장가:  100000000원");
		strcpy_s(Big_Deal_2.Big_Deal_Library[2], "현금흐름:    800000원");
		strcpy_s(Big_Deal_2.Big_Deal_Library[3], "가격:      20000000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   80000000원");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_2.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_2.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_2.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_2.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_2.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Big_Deal_3.Big_Deal_Library[0], "매가, 팔 집 (3방, 2욕실) ");
		strcpy_s(Big_Deal_3.Big_Deal_Library[1], "시장가: 67000000원");
		strcpy_s(Big_Deal_3.Big_Deal_Library[2], "현금흐름: 400000원");
		strcpy_s(Big_Deal_3.Big_Deal_Library[3], "가격: 12000000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   25500000원");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_3.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_3.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_3.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_3.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_3.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Big_Deal_4.Big_Deal_Library[0], "좋은 기회 (3방/ 2 욕실)");
		strcpy_s(Big_Deal_4.Big_Deal_Library[1], "시장가: 35000000원");
		strcpy_s(Big_Deal_4.Big_Deal_Library[2], "현금흐름: 220000원");
		strcpy_s(Big_Deal_4.Big_Deal_Library[3], "가격: 2000000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   33000000원");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_4.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_4.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_4.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_4.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_4.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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
		strcpy_s(Big_Deal_5.Big_Deal_Library[0], "팔 세차장 (2방/1 욕실)");
		strcpy_s(Big_Deal_5.Big_Deal_Library[1], "시장가: 350000000원");
		strcpy_s(Big_Deal_5.Big_Deal_Library[2], "현금흐름: 1500000원");
		strcpy_s(Big_Deal_5.Big_Deal_Library[3], "가격: 50000000원");
		strcpy_s(Small_Deal_1.Small_Deal_Library[4], "Morgage:   300000000원");

		settextcolor("YELLOW");
		gotoxytext(55, 23, Big_Deal_5.Big_Deal_Library[0]); settextcolor("NONE");
		gotoxytext(52, 25, Big_Deal_5.Big_Deal_Library[1]);
		gotoxytext(52, 26, Big_Deal_5.Big_Deal_Library[2]);
		gotoxytext(52, 27, Big_Deal_5.Big_Deal_Library[3]);
		gotoxytext(52, 28, Big_Deal_5.Big_Deal_Library[4]);

		gotoxytext(52, 32, "4보튼 : 구입          6 버튼: 구입하지 않다");
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

