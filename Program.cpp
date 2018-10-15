#include "GamePlay.h"
#include "Cards.h"
//Instance Variables 
int Input;
int Move;

int main(void)
{
	cursor_view(0); // Hide the cursor 

	

	//================== Menu ===================== //
	int Menu_Input;
	Boot_Screen();

	/*printf("\n\n\n\n\n\n\n\n\n\t\t\t\tMenu : \n\n\t\t\t\t\t1.���� ����\n");
	printf("\t\t\t\t\t2.���� ���\n");
	printf("\t\t\t\t\t3.���� ����\n");
	Menu_Input = (_getch()) - 48;
	switch (Menu_Input)
	{
	case 3:
		return(1);
		break;
	}*/

	// ============== Set up ======================= // 
	Reset();
	Setup();
	gotoxytext(37, 39, "��");
	//===================Testing =====================//

	//============================================ Game Play ====================================//
	while (1)
	{
		//================================ Round ���� ��  ============================================//
		gotoxytext(52, 32, "1��ư <�ֻ���>    2 ��ư <Repay>    3 ��ư <����>");
		Input = _getch();   
		//Input = ONE;  auto play 
		switch (Input)
		{
		case ONE:   //========================= �ֻ��� ������ =============//   # 1
			Move =Roll_Dice();
			for (int i = 0; i < Move; i++) {
				Player_1.Player_Object.Current_Position++;
				//gotoxyint(52, 30, Player_1.Player_Object.Current_Position); //Position�� ���� ������
				Move_To_Position(Player_1.Player_Object.Current_Position);
				//=========================================================//
				//===================  Ư���� ��� =========================//
				//=========================================================//
				
				//====  ���� ��ġ�� �ִ� ��� ===//
				if (Player_1.Player_Object.Current_Position == 7 || Player_1.Player_Object.Current_Position == 15 || Player_1.Player_Object.Current_Position == 23)
				{
					GamePlay(7); // ���� ��ġ�� �ִ� ��� 
				}

				//=========================================================//
				if (Player_1.Player_Object.Current_Position > 23)
				{
					GamePlay(24);  // 24 ������  �ִ� ��� 
					Player_1.Player_Object.Current_Position -= 24;
				}

				Sleep(200);
			}

			GamePlay(Player_1.Player_Object.Current_Position);  // 1 - 23 ��ġ�� �ִ� ��� 
			break;
		case TWO:   // REPAY           # 2
			break;
		case THREE: // BORROW		   # 3
			printf("3");
			DiceShape(3);
			break;
		case FOUR:  // �繫��ǥ ����    # 4
			Player_Setup_Employee(1);   // 1 �� Player Employment profile 
			Financial_Statement();  // �繫��ǥ ���� 
			Reset(); // or system("cls");
			Setup(); // ���带 ���� 
			Move_To_Position(Player_1.Player_Object.Current_Position);   // �÷��̾� ���� 
			break;
		default:
			system("cls");
			printf("Error\n");
			return 1;
		}

		//================================ Round ���� ��  ============================================//
		gotoxytext(52, 32, "2 ��ư :Repay    3 ��ư : ����    6 ��ư : Round ����");
		Input = _getch(); 

		switch (Input)
		{
		case TWO:   // REPAY           # 2
			break;
		case THREE: // BORROW		   # 3
			printf("3");
			DiceShape(3);
			break;
		case FOUR:  // �繫��ǥ ����    # 4
			Financial_Statement();  // �繫��ǥ ���� 
			Reset(); // or system("cls");
			Setup(); // ���带 ���� 
			Move_To_Position(Player_1.Player_Object.Current_Position);   // �÷��̾� ���� 
			break;
		case SIX:   // END ROUND       # 6 
			break;
		}
	}
	return 0;
}

