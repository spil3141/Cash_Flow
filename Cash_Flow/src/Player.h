#pragma once
#include <stdio.h>
#include "CONSTANTDECLARATIONS.h"
#include "Graphics.h"


//====================== Global Variable ================// 
#define MAX_NUM_PLAYERs 1


///////////////////////////////////////////////////////////////////////
//================== Player ����ü : ������ �����ϴ� �� =============//
//////////////////////////////////////////////////////////////////////

struct Income_Real_Estates_Business {	// ����
	int Raw_Land_Small_Deal;
	int Start_Up;
	int House_for_Sale_3_2_BR;
	int Old_3_2_BR;
	int Condo_for_Sale_2_1_BR;
};

struct Income_Interest_Dividends {	//����
};

struct Income {					//����
	int Salary;   // ���� 
	int Total_Interest_Dividends;   // ID_income �ӿ� �ִ� ����� ���ϴ� 
	int Total_Real_Estates;         // RE_income �ӿ� �ִ� ����� ���ϴ� 
	struct Income_Interest_Dividends ID_income;
	struct Income_Real_Estates_Business RE_income;
};

struct Expenses {				//����
	int Taxes = 0;                     // ���� 
	int Home_Mortgage_Payment;      // ���ô������ / ���� 
	int School_Loan_Payment;        // ���ڱ� ��������   
	int Car_Loan_Payment;           // �ڵ��� �Һ����� 
	int Credit_Card_Payment;       // �ſ� ī�� �Һ����� 
	int Retail_Payment;				// �Ҹ� �Һ� ���� 
	int Loan_Payment;				//��Ÿ ���� 
	int Other_Expenses;				//�ڳ� �������
	int Child_Expenses;
};

struct Assets_Stocks_Funds_CDs { // �ҿ�����
	
};

struct Assets_RealEstates_Business {    //�ҿ�����
	int Raw_Land_Small_Deal;
	int Start_Up;
	int House_for_Sale_3_2_BR;
	int Old_3_2_BR;
	int Condo_for_Sale_2_1_BR;
};
struct Assets {					//�ڻ�
	int Amount_Of_Saving;
	struct Assets_Stocks_Funds_CDs SFCD_assets; 
	struct Assets_RealEstates_Business RE_assets;
};
struct Liabilities_RealEstates_Business { // �ҿ�����
	int Raw_Land_Small_Deal_Mortgage;
	int Start_Up_Mortgage;
	int House_for_Sale_3_2_BR_Mortgage;
	int Old_3_2_BR_Mortgage;
	int Condo_for_Sale_2_1_BR_Mortgage;
};
struct Liabilities {			//��ä
	int Home_Mortgage;
	int School_Loan;
	int Car_Loans;
	int Credit_Cards; // �ſ� ī�� ���� �ϴ� �� 
	int Retail_Debt;
	struct Liabilities_RealEstates_Business RS_liabilities;
};

struct Basic_Information {
	unsigned long Current_Position =1;   // ���� ��ġ
	int Old_Postition[2];  // �־��� ��ġ  <X & Y >

};
struct Player_Progress {
	int PayDay =0;          // �����帧
	int Total_Income = 0;    // �� ����
	int Total_Expenses = 0;   // �� ���� 
	int Passive_Income = 0;   //  �����ҵ� 
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
		gotoxytext(37, 39, "��");
		break;
	case 2:  // Position 2
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 35, "��");
		break;
	case 3:  // Position 3
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 31, "��");
		break;
	case 4:  // Position 4
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 27, "��");
		break;
	case 5:  // Position 5
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 23, "��");
		break;
	case 6:  // Position 6
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 19, "��");
		break;
	case 7:  // Position 7
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(37, 15, "��");
		break;
	case 8:  // Position 8
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(51, 15, "��");
		break;
	case 9:  // Position 9
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(64, 15, "��");
		break;
	case 10:  // Position 10
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(79, 15, "��");
		break;
	case 11:  // Position 11
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(93, 15, "��");
		break;
	case 12:  // Position 12
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(107, 15, "��");
		break;
	case 13:  // Position 13
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 15, "��");
		break;
	case 14:  // Position 14
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 19, "��");
		break;
	case 15:  // Position 15
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 23, "��");
		break;
	case 16:  // Position 16
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 27, "��");
		break;
	case 17:  // Position 17
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 31, "��");
		break;
	case 18:  // Position 18
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 35, "��");
		break;
	case 19:  // Position 19
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(121, 39, "��");
		break;
	case 20:  // Position 20
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(107, 39, "��");
		break;
	case 21:  // Position 21
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(93, 39, "��");
		break;
	case 22:  // Position 22
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(79, 39, "��");
		break;
	case 23:  // Position 23
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(64, 39, "��");
		break;
	case 24:  // Position 24
		gotoxytext(Player_1.Player_Object.Old_Postition[0], Player_1.Player_Object.Old_Postition[1], " ");
		gotoxytext(51, 39, "��");
		break;
	
	}
}

void Player_Setup_Employee(int Career)   //  �ҿ�����
{
	switch (Career)
	{
	case 1:
		//========================= ȸ��� ������ ������ ================// 
		//       �̰��� �� ���� ���� �ϴ� ���Դϴ�                     // 
		//============================================================//
		//============= ����===============//
		Player_1.Income_Object.Salary = 4600000;     // ���� 
		Player_1.Income_Object.Total_Interest_Dividends = 0;
		Player_1.Income_Object.Total_Real_Estates = 0;

		Player_1.Progress_Object.Total_Income =
			Player_1.Income_Object.Salary +
			Player_1.Income_Object.Total_Interest_Dividends +
			Player_1.Income_Object.Total_Real_Estates;
		//============= ����===============//
		Player_1.Expenses_Object.Taxes = 910000;;
		Player_1.Expenses_Object.Car_Loan_Payment = 120000;
		Player_1.Expenses_Object.Credit_Card_Payment = 90000;
		Player_1.Expenses_Object.Home_Mortgage_Payment = 700000;
		Player_1.Expenses_Object.Loan_Payment = 0; // ������ �� �����ϱ� 
		Player_1.Expenses_Object.Other_Expenses = 1000000;
		Player_1.Expenses_Object.Retail_Payment = 50000;  // �Ҹ� �Һ� ���� 
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
		//============= �ڻ�===============//

		Player_1.Assets_Object.Amount_Of_Saving = 400000;

		//============= ��ä===============//

		Player_1.Liabilities_Object.Home_Mortgage = 75000000;
		Player_1.Liabilities_Object.School_Loan = 12000000;
		Player_1.Liabilities_Object.Car_Loans = 3000000;
		Player_1.Liabilities_Object.Credit_Cards = 3000000;
		Player_1.Liabilities_Object.Retail_Debt = 1000000;

		// Player_1.Liabilities_Object.RS_liabilities. �� �� 
		break;
	}




}

//////////////////////////////////////  ����  //////////////////////////////////////////////////////
void Financial_Statement()
{
	system("cls");
	//======================ȸ���/�����========
	printf("\n\n\n\t\t\t\t\t\t\t\t������ : ȸ���/�����\n");
	printf("\t\t\t\t\t\t\t======================================================\n");
	settextcolor("YELLOW");

	printf("\t\t\t\t\t\t\t============= ���� ============ \n\n");
	settextcolor("NONE");
	printf("\t\t\t\t\t\t\t����   :                          %d�� \n\n", Player_1.Income_Object.Salary);
	printf("\t\t\t\t\t\t\t����/����   :                    %d��\n\n",Player_1.Income_Object.Total_Interest_Dividends);
	printf("\t\t\t\t\t\t\t�ε���/���ü :                    %d��\n\n\n", Player_1.Income_Object.Total_Real_Estates);
	printf("\t\t\t\t\t\t\t<����+����+�ε���/���ü=����� �� �����ҵ�(�����ҵ�)>\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t�����ҵ� :                   %d��\n",Player_1.Progress_Object.Passive_Income);

	settextcolor("YELLOW");


	printf("\t\t\t\t\t\t\t=============����=============\n");
	settextcolor("NONE");
	printf("\t\t\t\t\t\t\t����:                %d��\n", Player_1.Expenses_Object.Taxes);
	printf("\t\t\t\t\t\t\t���ô�������/����:    %d��\n", Player_1.Expenses_Object.Home_Mortgage_Payment);
	printf("\t\t\t\t\t\t\t���ڱ� �������� :     %d��\n", Player_1.Expenses_Object.School_Loan_Payment);
	printf("\t\t\t\t\t\t\t�ڵ��� �Һ����� :     %d��\n", Player_1.Expenses_Object.Car_Loan_Payment);
	printf("\t\t\t\t\t\t\t�ſ� ī�� �Һ����� :  %d��\n", Player_1.Expenses_Object.Credit_Card_Payment);
	printf("\t\t\t\t\t\t\t�Ҹ� �Һ� ���� :      %d��\n", Player_1.Expenses_Object.Retail_Payment);
	printf("\t\t\t\t\t\t\t��Ÿ ���� :         %d��\n", Player_1.Expenses_Object.Other_Expenses);
	printf("\t\t\t\t\t\t\t�ڳ� ������� :                 \n");
	printf("\t\t\t\t\t\t\t���� 1��� ���ƺ�� :   %d��\n", Player_1.Expenses_Object.Child_Expenses);
	
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t��  ���� :          %d��\n\n", Player_1.Progress_Object.Total_Income);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t�� ��� :           %d��\n\n", Player_1.Progress_Object.Total_Expenses);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t---------------------------------\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t���� �����帧 :       %d��\n\n",Player_1.Progress_Object.PayDay);
	
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t ����:          %d��\n\n", Player_1.Progress_Object.Cash_On_Hand);
	settextcolor("YELLOW");
	printf("\t\t\t\t\t\t\t=============�ڻ�==============");	settextcolor("NONE");	settextcolor("YELLOW");					printf("\t\t\t\t==============��ä=============\n");  settextcolor("NONE");
	printf("\t\t\t\t\t\t\t����� :             %d��",Player_1.Assets_Object.Amount_Of_Saving);									printf("\t\t\t\t���ô��� :         %d��\n", Player_1.Liabilities_Object.Home_Mortgage);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t���ڱ� ����        %d��\n", Player_1.Liabilities_Object.School_Loan);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t�ڵ��� �Һ� ���� :  %d��\n", Player_1.Liabilities_Object.Car_Loans);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t�ſ� ī�� �Һ� :    %d��\n", Player_1.Liabilities_Object.Credit_Cards);
																																printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t�Ҹ� �Һ� :         %d��\n\n\n\n", Player_1.Liabilities_Object.Retail_Debt);

	_getch();
}


void Career_Professor()
{
	system("cls");
	//==========================����/////////////////////////////////////
	printf("\t\t������ :     ����\n");
	printf("======================================================\n");
	printf("=============����============\n");
	printf("����   :          3,300,000��\n");
	printf("����   :                    0\n");
	printf("���� :                    0\n");
	printf("�ε���/���ü :             0\n");
	printf("<����+����+�ε���/���ü=����� �� �����ҵ�(�����ҵ�)>\n\n\n");

	printf("�����ҵ� :                   0\n");
	printf("��  ���� :          3,300,000��\n\n");

	printf("=============����=============\n");
	printf("����:                630,000��\n");
	printf("���ô�������/����:   500,000��\n");
	printf("���ڱ� �������� :     60,000��\n");
	printf("�ڵ��� �Һ����� :    100,000��\n");
	printf("�ſ� ī�� �Һ����� :  90,000��\n");
	printf("�Ҹ� �Һ� ���� :      50,000��\n");
	printf("��Ÿ ���� :        760,000��\n");
	printf("�ڳ� ������� :              0\n\n");

	printf("���� 1��� ���ƺ�� :   180,000��\n");
	printf("�� ��� :               2,190,000\n\n");
	printf("---------------------------------\n");
	printf("���� �����帧 :       1,110,000��\n\n");

	printf("=============�ڻ�==============\n");
	printf("����� :             400,000��\n\n");

	printf("==============��ä=============\n");
	printf("���ô��� :         46,000,000��\n");
	printf("���ڱ� ����                 0��\n");
	printf("�ڵ��� �Һ� ���� :  5,000,000��\n");
	printf("�ſ� ī�� �Һ� :    2,000,000��\n");
	printf("�Ҹ� �Һ� :         1,000,000��\n");
}
void Career_Police()
{
	system("cls");
	//==============================������====================
	printf("\t\t������ :     ������\n");
	printf("======================================================\n");
	printf("=============����============\n");
	printf("����   :          3,000,000��\n");
	printf("����   :                    0\n");
	printf("���� :                    0\n");
	printf("�ε���/���ü :             0\n");
	printf("<����+����+�ε���/���ü=����� �� �����ҵ�(�����ҵ�)>\n\n\n");

	printf("�����ҵ� :                   0\n");
	printf("��  ���� :          3,000,000��\n\n");

	printf("=============����=============\n");
	printf("����:                580,000��\n");
	printf("���ô�������/����:   400,000��\n");
	printf("���ڱ� �������� :          0��\n");
	printf("�ڵ��� �Һ����� :    100,000��\n");
	printf("�ſ� ī�� �Һ����� :  60,000��\n");
	printf("�Ҹ� �Һ� ���� :      50,000��\n");
	printf("��Ÿ ���� :        690,000��\n");
	printf("�ڳ� ������� :              0\n\n");

	printf("���� 1��� ���ƺ�� :   160,000��\n");
	printf("�� ��� :               1,880,000\n\n");
	printf("---------------------------------\n");
	printf("���� �����帧 :       1,120,000��\n\n");

	printf("=============�ڻ�==============\n");
	printf("����� :              520,000��\n\n");

	printf("==============��ä=============\n");
	printf("���ô��� :         46,000,000��\n");
	printf("���ڱ� ����                 0��\n");
	printf("�ڵ��� �Һ� ���� :  5,000,000��\n");
	printf("�ſ� ī�� �Һ� :    2,000,000��\n");
	printf("�Ҹ� �Һ� :         1,000,000��\n");
}
void Career_Aerialpilot()
{
	system("cls");
	//=====================�װ� ������=====================

	printf("\t\t������ :     �װ� ������\n");
	printf("======================================================\n");
	printf("=============����============\n");
	printf("����   :          9,500,000��\n");
	printf("����   :                    0\n");
	printf("���� :                    0\n");
	printf("�ε���/���ü :             0\n");
	printf("<����+����+�ε���/���ü=����� �� �����ҵ�(�����ҵ�)>\n\n\n");

	printf("�����ҵ� :                   0\n");
	printf("��  ���� :          9,500,000��\n\n");

	printf("=============����=============\n");
	printf("����:              2,350,000��\n");
	printf("���ô�������/����: 1,330,000��\n");
	printf("���ڱ� �������� :          0��\n");
	printf("�ڵ��� �Һ����� :    200,000��\n");
	printf("�ſ� ī�� �Һ����� : 600,000��\n");
	printf("�Ҹ� �Һ� ���� :      50,000��\n");
	printf("��Ÿ ���� :      2,210,000��\n");
	printf("�ڳ� ������� :              0\n\n");

	printf("���� 1��� ���ƺ�� :   480,000��\n");
	printf("�� ��� :               6,900,000\n\n");
	printf("---------------------------------\n");
	printf("���� �����帧 :       2,600,000��\n\n");

	printf("=============�ڻ�==============\n");
	printf("����� :              400,000��\n\n");

	printf("==============��ä=============\n");
	printf("���ô��� :        143,000,000��\n");
	printf("���ڱ� ����                 0��\n");
	printf("�ڵ��� �Һ� ���� : 15,000,000��\n");
	printf("�ſ� ī�� �Һ� :   22,000,000��\n");
	printf("�Ҹ� �Һ� :         1,000,000��\n");
}
void Career_Doctor()
{
	system("cls");
	//=========================�ǻ�======================

	printf("\t\t������ :            �ǻ�\n");
	printf("======================================================\n");
	printf("=============����============\n");
	printf("����   :         13,200,000��\n");
	printf("����   :                    0\n");
	printf("���� :                    0\n");
	printf("�ε���/���ü :             0\n");
	printf("<����+����+�ε���/���ü=����� �� �����ҵ�(�����ҵ�)>\n\n\n");

	printf("�����ҵ� :                   0\n");
	printf("��  ���� :        13,200,000��\n\n");

	printf("=============����=============\n");
	printf("����:              3,420,000��\n");
	printf("���ô�������/����: 1,900,000��\n");
	printf("���ڱ� �������� :    750,000��\n");
	printf("�ڵ��� �Һ����� :    380,000��\n");
	printf("�ſ� ī�� �Һ����� : 270,000��\n");
	printf("�Ҹ� �Һ� ���� :      50,000��\n");
	printf("��Ÿ ���� :      2,880,000��\n");
	printf("�ڳ� ������� :              0\n\n");

	printf("���� 1��� ���ƺ�� :   640,000��\n");
	printf("�� ��� :               9,650,000\n\n");
	printf("---------------------------------\n");
	printf("���� �����帧 :       3,550,000��\n\n");

	printf("=============�ڻ�==============\n");
	printf("����� :              400,000��\n\n");

	printf("==============��ä=============\n");
	printf("���ô��� :        202,000,000��\n");
	printf("���ڱ� ����       150,000,000��\n");
	printf("�ڵ��� �Һ� ���� : 19,000,000��\n");
	printf("�ſ� ī�� �Һ� :   9,000,000��\n");
	printf("�Ҹ� �Һ� :         1,000,000��\n");
}


