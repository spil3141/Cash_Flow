#pragma once
#include <stdio.h>
#include "CONSTANTDECLARATIONS.h"
#include "Graphics.h"


//====================== Global Variable ================// 
#define MAX_NUM_PLAYERs 1


///////////////////////////////////////////////////////////////////////
//================== Player 구조체 : 정보를 저장하는 것 =============//
//////////////////////////////////////////////////////////////////////

struct Income_Real_Estates_Business {	// 개인
	int Raw_Land_Small_Deal;
	int Start_Up;
	int House_for_Sale_3_2_BR;
	int Old_3_2_BR;
	int Condo_for_Sale_2_1_BR;
};

struct Income_Interest_Dividends {	//이자
};

struct Income {					//수입
	int Salary;   // 원급 
	int Total_Interest_Dividends;   // ID_income 속에 있는 멤버를 더하다 
	int Total_Real_Estates;         // RE_income 속에 있는 멤버를 더하다 
	struct Income_Interest_Dividends ID_income;
	struct Income_Real_Estates_Business RE_income;
};

struct Expenses {				//지출
	int Taxes = 0;                     // 세금 
	int Home_Mortgage_Payment;      // 주택대출아자 / 월세 
	int School_Loan_Payment;        // 학자금 대출이자   
	int Car_Loan_Payment;           // 자동차 할부이자 
	int Credit_Card_Payment;       // 신용 카드 할부이자 
	int Retail_Payment;				// 소매 할부 이자 
	int Loan_Payment;				//기타 비용들 
	int Other_Expenses;				//자녀 양육비용
	int Child_Expenses;
};

struct Assets_Stocks_Funds_CDs { // 불완전한
	
};

struct Assets_RealEstates_Business {    //불완전한
	int Raw_Land_Small_Deal;
	int Start_Up;
	int House_for_Sale_3_2_BR;
	int Old_3_2_BR;
	int Condo_for_Sale_2_1_BR;
};
struct Assets {					//자산
	int Amount_Of_Saving;
	struct Assets_Stocks_Funds_CDs SFCD_assets; 
	struct Assets_RealEstates_Business RE_assets;
};
struct Liabilities_RealEstates_Business { // 불완전한
	int Raw_Land_Small_Deal_Mortgage;
	int Start_Up_Mortgage;
	int House_for_Sale_3_2_BR_Mortgage;
	int Old_3_2_BR_Mortgage;
	int Condo_for_Sale_2_1_BR_Mortgage;
};
struct Liabilities {			//부채
	int Home_Mortgage;
	int School_Loan;
	int Car_Loans;
	int Credit_Cards; // 신용 카드 내야 하는 돈 
	int Retail_Debt;
	struct Liabilities_RealEstates_Business RS_liabilities;
};

struct Basic_Information {
	unsigned long Current_Position =1;   // 현제 위치
	int Old_Postition[2];  // 있었던 위치  <X & Y >

};
struct Player_Progress {
	int PayDay =0;          // 현금흐름
	int Total_Income = 0;    // 총 수입
	int Total_Expenses = 0;   // 총 지출 
	int Passive_Income = 0;   //  금융소득 
	int Cash_On_Hand =0;
};
struct Player_Cornerstone{
	struct Player_Progress Progress_Object;      
	struct Income Income_Object; 
	struct Expenses Expenses_Object;
	struct Assets Assets_Object;
	struct Liabilities Liabilities_Object;
	struct Basic_Information Player_Object;  
}Player_1;
///////////////////////////////////////////////////////////////////////////////////////


//================================= Movement ===================================//

void Syn_Dice_To_Position(int input)  // input is the Player_1.Player_Object.Current_Postition
{
	if (input == 1)
	{
		Player_1.Player_Object.Old_Postition[0] = 51;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}
	else if (input == 2)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}
	else if (input == 3)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 35;
	}
	else if (input == 4)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 31;
	}
	else if (input == 5)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 27;
	}
	else if (input == 6)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 23;
	}
	else if (input == 7)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 19;
	}
	else if (input == 8)
	{
		Player_1.Player_Object.Old_Postition[0] = 37;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 9)
	{
		Player_1.Player_Object.Old_Postition[0] = 51;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 10)
	{
		Player_1.Player_Object.Old_Postition[0] = 64;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 11)
	{
		Player_1.Player_Object.Old_Postition[0] = 79;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 12)
	{
		Player_1.Player_Object.Old_Postition[0] = 93;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 13)
	{
		Player_1.Player_Object.Old_Postition[0] = 107;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 14)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 15;
	}
	else if (input == 15)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 19;
	}
	else if (input == 16)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 23;
	}
	else if (input == 17)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 27;
	}
	else if (input == 18)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 31;
	}
	else if (input == 19)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 35;
	}
	else if (input == 20)
	{
		Player_1.Player_Object.Old_Postition[0] = 121;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}
	else if (input == 21)
	{
		Player_1.Player_Object.Old_Postition[0] = 107;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}
	else if (input == 22)
	{
		Player_1.Player_Object.Old_Postition[0] = 93;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}
	else if (input == 23)
	{
		Player_1.Player_Object.Old_Postition[0] = 79;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}
	else if (input == 24)
	{
		Player_1.Player_Object.Old_Postition[0] = 64;
		Player_1.Player_Object.Old_Postition[1] = 39;
	}




}

void Move_To_Position(int input)
{
	Syn_Dice_To_Position(Player_1.Player_Object.Current_Position);
	sndPlaySoundA(".\\res\\DiceItem00000_0.wav", SND_ASYNC | SND_NODEFAULT);
	switch (input)
	{
	case 1: // Position 1
		if(Player_1.Player_Object.Old_Postition != NULL)
			gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 39, "▲");
		break;
	case 2:  // Position 2
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 35, "▲");
		break;
	case 3:  // Position 3
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 31, "▲");
		break;
	case 4:  // Position 4
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 27, "▲");
		break;
	case 5:  // Position 5
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 23, "▲");
		break;
	case 6:  // Position 6
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 19, "▲");
		break;
	case 7:  // Position 7
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 15, "▲");
		break;
	case 8:  // Position 8
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(51, 15, "▲");
		break;
	case 9:  // Position 9
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(64, 15, "▲");
		break;
	case 10:  // Position 10
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(79, 15, "▲");
		break;
	case 11:  // Position 11
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(93, 15, "▲");
		break;
	case 12:  // Position 12
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(107, 15, "▲");
		break;
	case 13:  // Position 13
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 15, "▲");
		break;
	case 14:  // Position 14
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 19, "▲");
		break;
	case 15:  // Position 15
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 23, "▲");
		break;
	case 16:  // Position 16
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 27, "▲");
		break;
	case 17:  // Position 17
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 31, "▲");
		break;
	case 18:  // Position 18
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 35, "▲");
		break;
	case 19:  // Position 19
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 39, "▲");
		break;
	case 20:  // Position 20
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(107, 39, "▲");
		break;
	case 21:  // Position 21
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(93, 39, "▲");
		break;
	case 22:  // Position 22
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(79, 39, "▲");
		break;
	case 23:  // Position 23
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(64, 39, "▲");
		break;
	case 24:  // Position 24
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(51, 39, "▲");
		break;
	
	}
}

void Player_Setup_Employee(int Career)   //  불완전한
{
	switch (Career)
	{
	case 1:
		//========================= 회사원 정보를 선언함 ================// 
		//       이것은 한 번만 실행 하는 것입니다                     // 
		//============================================================//
		//============= 수입===============//
		Player_1.Income_Object.Salary = 4600000;     // 월급 
		Player_1.Income_Object.Total_Interest_Dividends = 0;
		Player_1.Income_Object.Total_Real_Estates = 0;

		Player_1.Progress_Object.Total_Income =
			Player_1.Income_Object.Salary +
			Player_1.Income_Object.Total_Interest_Dividends +
			Player_1.Income_Object.Total_Real_Estates;
		//============= 지출===============//
		Player_1.Expenses_Object.Taxes = 910000;;
		Player_1.Expenses_Object.Car_Loan_Payment = 120000;
		Player_1.Expenses_Object.Credit_Card_Payment = 90000;
		Player_1.Expenses_Object.Home_Mortgage_Payment = 700000;
		Player_1.Expenses_Object.Loan_Payment = 0; // 시작할 때 없으니까 
		Player_1.Expenses_Object.Other_Expenses = 1000000;
		Player_1.Expenses_Object.Retail_Payment = 50000;  // 소매 할부 이자 
		Player_1.Expenses_Object.School_Loan_Payment = 60000;
		Player_1.Expenses_Object.Child_Expenses = 240000;

		Player_1.Progress_Object.Total_Expenses =
			Player_1.Expenses_Object.Taxes +
			Player_1.Expenses_Object.Car_Loan_Payment +
			Player_1.Expenses_Object.Credit_Card_Payment +
			Player_1.Expenses_Object.Home_Mortgage_Payment +
			Player_1.Expenses_Object.Loan_Payment +
			Player_1.Expenses_Object.Other_Expenses +
			Player_1.Expenses_Object.Retail_Payment +
			Player_1.Expenses_Object.School_Loan_Payment +
			Player_1.Expenses_Object.Child_Expenses;
		//============= 자산===============//

		Player_1.Assets_Object.Amount_Of_Saving = 400000;

		//============= 부채===============//

		Player_1.Liabilities_Object.Home_Mortgage = 75000000;
		Player_1.Liabilities_Object.School_Loan = 12000000;
		Player_1.Liabilities_Object.Car_Loans = 3000000;
		Player_1.Liabilities_Object.Credit_Cards = 3000000;
		Player_1.Liabilities_Object.Retail_Debt = 1000000;

		// Player_1.Liabilities_Object.RS_liabilities. 등 등 
		break;
	}




}

//////////////////////////////////////  직업  //////////////////////////////////////////////////////
void Financial_Statement()
{
	system("cls");
	//======================회사원/부장급========
	printf("\n\n\n\t\t\t\t\t\t\t\t직업명 : 회사권/부장급\n");
	printf("\t\t\t\t\t\t\t======================================================\n");
	settextcolor("YELLOW");

	printf("\t\t\t\t\t\t\t============= 수입 ============ \n\n");
	settextcolor("NONE");
	printf("\t\t\t\t\t\t\t월급   :                          %d원 \n\n", Player_1.Income_Object.Salary);
	printf("\t\t\t\t\t\t\t이자/배당금   :                    %d원\n\n",Player_1.Income_Object.Total_Interest_Dividends);
	printf("\t\t\t\t\t\t\t부동산/사업체 :                    %d원\n\n\n", Player_1.Income_Object.Total_Real_Estates);
	printf("\t\t\t\t\t\t\t<이자+배당금+부동산/사업체=당신의 총 금융소득(수동소득)>\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t금융소득 :                   %d원\n",Player_1.Progress_Object.Passive_Income);

	settextcolor("YELLOW");


	printf("\t\t\t\t\t\t\t=============지출=============\n");
	settextcolor("NONE");
	printf("\t\t\t\t\t\t\t세금:                %d원\n", Player_1.Expenses_Object.Taxes);
	printf("\t\t\t\t\t\t\t주택대출이자/월세:    %d원\n", Player_1.Expenses_Object.Home_Mortgage_Payment);
	printf("\t\t\t\t\t\t\t학자금 대출이자 :     %d원\n", Player_1.Expenses_Object.School_Loan_Payment);
	printf("\t\t\t\t\t\t\t자동차 할부이자 :     %d원\n", Player_1.Expenses_Object.Car_Loan_Payment);
	printf("\t\t\t\t\t\t\t신용 카드 할부이자 :  %d원\n", Player_1.Expenses_Object.Credit_Card_Payment);
	printf("\t\t\t\t\t\t\t소매 할부 이자 :      %d원\n", Player_1.Expenses_Object.Retail_Payment);
	printf("\t\t\t\t\t\t\t기타 비용들 :         %d원\n", Player_1.Expenses_Object.Other_Expenses);
	printf("\t\t\t\t\t\t\t자녀 양육비용 :                 \n");
	printf("\t\t\t\t\t\t\t아이 1명당 육아비용 :   %d원\n", Player_1.Expenses_Object.Child_Expenses);
	
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t총  수입 :          %d원\n\n", Player_1.Progress_Object.Total_Income);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t총 비용 :           %d원\n\n", Player_1.Progress_Object.Total_Expenses);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t---------------------------------\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t월별 현금흐름 :       %d원\n\n",Player_1.Progress_Object.PayDay);
	
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t 현금:          %d원\n\n", Player_1.Progress_Object.Cash_On_Hand);
	settextcolor("YELLOW");
	printf("\t\t\t\t\t\t\t=============자산==============");	settextcolor("NONE");	settextcolor("YELLOW");					printf("\t\t\t\t==============부채=============\n");  settextcolor("NONE");
	printf("\t\t\t\t\t\t\t저축액 :             %d원",Player_1.Assets_Object.Amount_Of_Saving);									printf("\t\t\t\t주택대출 :         %d원\n", Player_1.Liabilities_Object.Home_Mortgage);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t학자금 대출        %d원\n", Player_1.Liabilities_Object.School_Loan);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t자동차 할부 대출 :  %d원\n", Player_1.Liabilities_Object.Car_Loans);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t신용 카드 할부 :    %d원\n", Player_1.Liabilities_Object.Credit_Cards);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t소매 할부 :         %d원\n\n\n\n", Player_1.Liabilities_Object.Retail_Debt);

	_getch();
}


void Career_Professor()
{
	system("cls");
	//==========================교사/////////////////////////////////////
	printf("\t\t직업명 :     교사\n");
	printf("======================================================\n");
	printf("=============수입============\n");
	printf("월급   :          3,300,000원\n");
	printf("이자   :                    0\n");
	printf("배당금 :                    0\n");
	printf("부동산/사업체 :             0\n");
	printf("<이자+배당금+부동산/사업체=당신의 총 금융소득(수동소득)>\n\n\n");

	printf("금융소득 :                   0\n");
	printf("총  수입 :          3,300,000원\n\n");

	printf("=============지출=============\n");
	printf("세금:                630,000원\n");
	printf("주택대출이자/월세:   500,000원\n");
	printf("학자금 대출이자 :     60,000원\n");
	printf("자동차 할부이자 :    100,000원\n");
	printf("신용 카드 할부이자 :  90,000원\n");
	printf("소매 할부 이자 :      50,000원\n");
	printf("기타 비용들 :        760,000원\n");
	printf("자녀 양육비용 :              0\n\n");

	printf("아이 1명당 육아비용 :   180,000원\n");
	printf("총 비용 :               2,190,000\n\n");
	printf("---------------------------------\n");
	printf("월별 현금흐름 :       1,110,000원\n\n");

	printf("=============자산==============\n");
	printf("저축액 :             400,000원\n\n");

	printf("==============부채=============\n");
	printf("주택대출 :         46,000,000원\n");
	printf("학자금 대출                 0원\n");
	printf("자동차 할부 대출 :  5,000,000원\n");
	printf("신용 카드 할부 :    2,000,000원\n");
	printf("소매 할부 :         1,000,000원\n");
}
void Career_Police()
{
	system("cls");
	//==============================경찰관====================
	printf("\t\t직업명 :     경찰관\n");
	printf("======================================================\n");
	printf("=============수입============\n");
	printf("월급   :          3,000,000원\n");
	printf("이자   :                    0\n");
	printf("배당금 :                    0\n");
	printf("부동산/사업체 :             0\n");
	printf("<이자+배당금+부동산/사업체=당신의 총 금융소득(수동소득)>\n\n\n");

	printf("금융소득 :                   0\n");
	printf("총  수입 :          3,000,000원\n\n");

	printf("=============지출=============\n");
	printf("세금:                580,000원\n");
	printf("주택대출이자/월세:   400,000원\n");
	printf("학자금 대출이자 :          0원\n");
	printf("자동차 할부이자 :    100,000원\n");
	printf("신용 카드 할부이자 :  60,000원\n");
	printf("소매 할부 이자 :      50,000원\n");
	printf("기타 비용들 :        690,000원\n");
	printf("자녀 양육비용 :              0\n\n");

	printf("아이 1명당 육아비용 :   160,000원\n");
	printf("총 비용 :               1,880,000\n\n");
	printf("---------------------------------\n");
	printf("월별 현금흐름 :       1,120,000원\n\n");

	printf("=============자산==============\n");
	printf("저축액 :              520,000원\n\n");

	printf("==============부채=============\n");
	printf("주택대출 :         46,000,000원\n");
	printf("학자금 대출                 0원\n");
	printf("자동차 할부 대출 :  5,000,000원\n");
	printf("신용 카드 할부 :    2,000,000원\n");
	printf("소매 할부 :         1,000,000원\n");
}
void Career_Aerialpilot()
{
	system("cls");
	//=====================항공 조종사=====================

	printf("\t\t직업명 :     항공 조종사\n");
	printf("======================================================\n");
	printf("=============수입============\n");
	printf("월급   :          9,500,000원\n");
	printf("이자   :                    0\n");
	printf("배당금 :                    0\n");
	printf("부동산/사업체 :             0\n");
	printf("<이자+배당금+부동산/사업체=당신의 총 금융소득(수동소득)>\n\n\n");

	printf("금융소득 :                   0\n");
	printf("총  수입 :          9,500,000원\n\n");

	printf("=============지출=============\n");
	printf("세금:              2,350,000원\n");
	printf("주택대출이자/월세: 1,330,000원\n");
	printf("학자금 대출이자 :          0원\n");
	printf("자동차 할부이자 :    200,000원\n");
	printf("신용 카드 할부이자 : 600,000원\n");
	printf("소매 할부 이자 :      50,000원\n");
	printf("기타 비용들 :      2,210,000원\n");
	printf("자녀 양육비용 :              0\n\n");

	printf("아이 1명당 육아비용 :   480,000원\n");
	printf("총 비용 :               6,900,000\n\n");
	printf("---------------------------------\n");
	printf("월별 현금흐름 :       2,600,000원\n\n");

	printf("=============자산==============\n");
	printf("저축액 :              400,000원\n\n");

	printf("==============부채=============\n");
	printf("주택대출 :        143,000,000원\n");
	printf("학자금 대출                 0원\n");
	printf("자동차 할부 대출 : 15,000,000원\n");
	printf("신용 카드 할부 :   22,000,000원\n");
	printf("소매 할부 :         1,000,000원\n");
}
void Career_Doctor()
{
	system("cls");
	//=========================의사======================

	printf("\t\t직업명 :            의사\n");
	printf("======================================================\n");
	printf("=============수입============\n");
	printf("월급   :         13,200,000원\n");
	printf("이자   :                    0\n");
	printf("배당금 :                    0\n");
	printf("부동산/사업체 :             0\n");
	printf("<이자+배당금+부동산/사업체=당신의 총 금융소득(수동소득)>\n\n\n");

	printf("금융소득 :                   0\n");
	printf("총  수입 :        13,200,000원\n\n");

	printf("=============지출=============\n");
	printf("세금:              3,420,000원\n");
	printf("주택대출이자/월세: 1,900,000원\n");
	printf("학자금 대출이자 :    750,000원\n");
	printf("자동차 할부이자 :    380,000원\n");
	printf("신용 카드 할부이자 : 270,000원\n");
	printf("소매 할부 이자 :      50,000원\n");
	printf("기타 비용들 :      2,880,000원\n");
	printf("자녀 양육비용 :              0\n\n");

	printf("아이 1명당 육아비용 :   640,000원\n");
	printf("총 비용 :               9,650,000\n\n");
	printf("---------------------------------\n");
	printf("월별 현금흐름 :       3,550,000원\n\n");

	printf("=============자산==============\n");
	printf("저축액 :              400,000원\n\n");

	printf("==============부채=============\n");
	printf("주택대출 :        202,000,000원\n");
	printf("학자금 대출       150,000,000원\n");
	printf("자동차 할부 대출 : 19,000,000원\n");
	printf("신용 카드 할부 :   9,000,000원\n");
	printf("소매 할부 :         1,000,000원\n");
}


