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

	/*printf("\n\n\n\n\n\n\n\n\n\t\t\t\tMenu : \n\n\t\t\t\t\t1.게임 시작\n");
	printf("\t\t\t\t\t2.게임 방법\n");
	printf("\t\t\t\t\t3.게임 종료\n");
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
	gotoxytext(37, 39, "▲");
	//===================Testing =====================//

	//============================================ Game Play ====================================//
	while (1)
	{
		//================================ Round 시작 때  ============================================//
		gotoxytext(52, 32, "1버튼 <주사위>    2 버튼 <Repay>    3 버튼 <운행>");
		Input = _getch();   
		//Input = ONE;  auto play 
		switch (Input)
		{
		case ONE:   //========================= 주사위 굴리다 =============//   # 1
			Move =Roll_Dice();
			for (int i = 0; i < Move; i++) {
				Player_1.Player_Object.Current_Position++;
				//gotoxyint(52, 30, Player_1.Player_Object.Current_Position); //Position를 보고 싶으면
				Move_To_Position(Player_1.Player_Object.Current_Position);
				//=========================================================//
				//===================  특별한 경우 =========================//
				//=========================================================//
				
				//====  봉급 위치에 있는 경우 ===//
				if (Player_1.Player_Object.Current_Position == 7 || Player_1.Player_Object.Current_Position == 15 || Player_1.Player_Object.Current_Position == 23)
				{
					GamePlay(7); // 봉급 위치에 있는 경우 
				}

				//=========================================================//
				if (Player_1.Player_Object.Current_Position > 23)
				{
					GamePlay(24);  // 24 위지에  있는 경우 
					Player_1.Player_Object.Current_Position -= 24;
				}

				Sleep(200);
			}

			GamePlay(Player_1.Player_Object.Current_Position);  // 1 - 23 위치에 있는 경우 
			break;
		case TWO:   // REPAY           # 2
			break;
		case THREE: // BORROW		   # 3
			printf("3");
			DiceShape(3);
			break;
		case FOUR:  // 재무제표 보기    # 4
			Player_Setup_Employee(1);   // 1 는 Player Employment profile 
			Financial_Statement();  // 재무제표 보기 
			Reset(); // or system("cls");
			Setup(); // 보드를 보기 
			Move_To_Position(Player_1.Player_Object.Current_Position);   // 플레이어 보기 
			break;
		default:
			system("cls");
			printf("Error\n");
			return 1;
		}

		//================================ Round 끝날 때  ============================================//
		gotoxytext(52, 32, "2 버튼 :Repay    3 버튼 : 운행    6 버튼 : Round 종료");
		Input = _getch(); 

		switch (Input)
		{
		case TWO:   // REPAY           # 2
			break;
		case THREE: // BORROW		   # 3
			printf("3");
			DiceShape(3);
			break;
		case FOUR:  // 재무제표 보기    # 4
			Financial_Statement();  // 재무제표 보기 
			Reset(); // or system("cls");
			Setup(); // 보드를 보기 
			Move_To_Position(Player_1.Player_Object.Current_Position);   // 플레이어 보기 
			break;
		case SIX:   // END ROUND       # 6 
			break;
		}
	}
	return 0;
}

