#pragma comment (lib,"Winmm")  // Library linker for Sound 
#include "Graphics.h"
#include <Mmsystem.h>  // Sound header file 
#include "Setup.h"
#include "Player.h"
#include "Dice.h"
#include "Startup.h"
#include "Cards.h"
#include <string.h>







void GamePlay(int Current_Position)
{
	//===========��ȸ ���� =============//
	if (Current_Position == 2
			|| Current_Position == 4
				|| Current_Position == 6
					|| Current_Position == 8
						|| Current_Position == 10
							|| Current_Position == 12
								|| Current_Position == 14
									|| Current_Position == 16
										|| Current_Position == 18
											|| Current_Position == 20
												|| Current_Position == 22
													|| Current_Position == 24)
		
	{
		while (1)                 // �����ؾ� �� !!!
		{
			gotoxytext(52, 32, "5 ��ư : ����   8 ��ư : ū ��ȸ  ");
			int option = _getch();
			switch (option)
			{
			case FIVE:  // ���� ��ȸ        # 5
				Small_Deal_Cards(1+rand() % 5); // 1 - 5 
				Display_Reset();
				return;
			case EIGHT: // ū ��ȸ          # 8
				Big_Deal_Cards(1+rand() % 5);
				Display_Reset();
				return;
			}
		}
	}

	//=============================================================================//
	
	//===========���� ���� =============//
	if (		Current_Position == 1
			|| Current_Position == 9
		|| Current_Position == 17
		)
		
	{
		gotoxytext(52, 25, "���� ��ġ�Դϴ�");
		_getch();

		Display_Reset();
		
		
	}

	//=============================================================================//

	//==============  ���� =========================//
	if (   Current_Position == 3
		|| Current_Position == 11
		|| Current_Position == 19
		)
	{
		sndPlaySoundA(".\\res\\Dodad.wav", SND_ASYNC | SND_NODEFAULT);
		Player_1.Progress_Object.Cash_On_Hand -= 200000;
	}

	//==============  ������ġ =========================//
	if (   Current_Position == 7
		|| Current_Position == 15
		|| Current_Position == 23
		)
	{
		Player_1.Progress_Object.Cash_On_Hand += Player_1.Progress_Object.PayDay;
	}

	//==============  �Ʊ�  ��ġ =========================//
	if (Current_Position == 5)
	{
		sndPlaySoundA(".\\res\\Baby.wav", SND_ASYNC | SND_NODEFAULT);
		Player_1.Expenses_Object.Child_Expenses += 100000;

	}

	//==============  ���� ��ġ  =========================//
	if (Current_Position == 13)
	{
		int test;
		gotoxytext(52, 25, "������ �ְ� �ͽ��ϱ�? < ���� 1 ��ư > ");
		test = _getch();
		if (test == ONE)
		{
			Player_1.Progress_Object.Cash_On_Hand -= 150000;
		}
	}

	//==============  �˼� ��ġ  =========================//
	if (Current_Position == 21)
	{
		gotoxytext(52, 25, "�˼�  ��ġ�Դϴ�");
	}
}