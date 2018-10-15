#include <stdio.h>
#include "Graphics.h"
#include "CONSTANTDECLARATIONS.h"


//=================================  Dice Distribtion ====================================// 
//          1. Player representation on Board   ��
//          2. Starting Position : gotoxytext(37, 39, "��");
//========================================================================================//

void DiceShape(int dice);
int Roll_Dice();
//Variables

int Dice_state = 0;



int Roll_Dice()
{
	srand(time(NULL));
	Dice_state = rand() % 6;
	if (Dice_state == 0)
			Dice_state += 1;
	DiceShape(Dice_state); 
	sndPlaySoundA(".\\Sounds\\MANYDICE.WAV", SND_ASYNC | SND_NODEFAULT);
	Sleep(1000);
	Display_Reset();
	return Dice_state;
}

void DiceShape(int dice) 
{
	if (dice == 1) 
	{
		gotoxy(68, 20); printf("  ��������������");     
		gotoxy(68, 21); printf("  ��          ��");
		gotoxy(68, 22); printf("  ��          ��");
		gotoxy(68, 24); printf("  ��    ��    ��");
		gotoxy(68, 25); printf("  ��          ��");
		gotoxy(68, 26); printf("  ��          ��");
		gotoxy(68, 27); printf("  ��������������");     
	}
	if (dice == 2)
	{
		gotoxy(68, 20); printf("  ��������������");
		gotoxy(68, 21); printf("  ��          ��");
		gotoxy(68, 22); printf("  ��    ��    ��");
		gotoxy(68, 24); printf("  ��          ��");
		gotoxy(68, 25); printf("  ��    ��    ��");
		gotoxy(68, 26); printf("  ��          ��");
		gotoxy(68, 27); printf("  ��������������");
	}
	if (dice == 3) 
	{
		gotoxy(68, 20); printf("  ��������������");
		gotoxy(68, 21); printf("  ��          ��");
		gotoxy(68, 22); printf("  ��    ��    ��");
		gotoxy(68, 24); printf("  ��          ��");
		gotoxy(68, 25); printf("  �� ��    �� ��");
		gotoxy(68, 26); printf("  ��          ��");
		gotoxy(68, 27); printf("  ��������������");
	}
	if (dice == 4) 
	{
		gotoxy(68, 20); printf("  ��������������");
		gotoxy(68, 21); printf("  ��          ��");
		gotoxy(68, 22); printf("  �� ��    �� ��");
		gotoxy(68, 24); printf("  ��          ��");
		gotoxy(68, 25); printf("  �� ��    �� ��");
		gotoxy(68, 26); printf("  ��          ��");
		gotoxy(68, 27); printf("  ��������������");
	}
	if (dice == 5) 
	{
		gotoxy(68, 20); printf("  ��������������");
		gotoxy(68, 21); printf("  ��          ��");
		gotoxy(68, 22); printf("  �� ��    �� ��");
		gotoxy(68, 24); printf("  ��    ��    ��");
		gotoxy(68, 25); printf("  �� ��    �� ��");
		gotoxy(68, 26); printf("  ��          ��");
		gotoxy(68, 27); printf("  ��������������");
	}
	if (dice == 6) 
	{
		gotoxy(68, 20); printf("  ��������������");
		gotoxy(68, 21); printf("  ��          ��");
		gotoxy(68, 22); printf("  �� ��    �� ��");
		gotoxy(68, 24); printf("  �� ��    �� ��");
		gotoxy(68, 26); printf("  �� ��    �� ��");
		gotoxy(68, 27); printf("  ��          ��");
		gotoxy(68, 28); printf("  ��������������");
	}
}

void DiceShape2(int dice2) {

	if (dice2 == 1) {
		gotoxy(65, 12); printf("  ��������������");
		gotoxy(65, 13); printf("  ��          ��");
		gotoxy(65, 14); printf("  ��          ��");
		gotoxy(65, 15); printf("  ��    ��    ��");
		gotoxy(65, 16); printf("  ��          ��");
		gotoxy(65, 17); printf("  ��          ��");
		gotoxy(65, 18); printf("  ��������������");
	}
	if (dice2 == 2) {
		gotoxy(65, 12); printf("  ��������������");
		gotoxy(65, 13); printf("  ��          ��");
		gotoxy(65, 14); printf("  ��    ��    ��");
		gotoxy(65, 15); printf("  ��          ��");
		gotoxy(65, 16); printf("  ��    ��    ��");
		gotoxy(65, 17); printf("  ��          ��");
		gotoxy(65, 18); printf("  ��������������");
	}
	if (dice2 == 3) {
		gotoxy(65, 12); printf("  ��������������");
		gotoxy(65, 13); printf("  ��          ��");
		gotoxy(65, 14); printf("  ��    ��    ��");
		gotoxy(65, 15); printf("  ��          ��");
		gotoxy(65, 16); printf("  �� ��    �� ��");
		gotoxy(65, 17); printf("  ��          ��");
		gotoxy(65, 18); printf("  ��������������");
	}
	if (dice2 == 4) {
		gotoxy(65, 12); printf("  ��������������");
		gotoxy(65, 13); printf("  ��          ��");
		gotoxy(65, 14); printf("  �� ��    �� ��");
		gotoxy(65, 15); printf("  ��          ��");
		gotoxy(65, 16); printf("  �� ��    �� ��");
		gotoxy(65, 17); printf("  ��          ��");
		gotoxy(65, 18); printf("  ��������������");
	}
	if (dice2 == 5) {
		gotoxy(65, 12); printf("  ��������������");
		gotoxy(65, 13); printf("  ��          ��");
		gotoxy(65, 14); printf("  �� ��    �� ��");
		gotoxy(65, 15); printf("  ��    ��    ��");
		gotoxy(65, 16); printf("  �� ��    �� ��");
		gotoxy(65, 17); printf("  ��          ��");
		gotoxy(65, 18); printf("  ��������������");
	}
	if (dice2 == 6) {
		gotoxy(65, 12); printf("  ��������������");
		gotoxy(65, 13); printf("  ��          ��");
		gotoxy(65, 14); printf("  �� ��    �� ��");
		gotoxy(65, 15); printf("  �� ��    �� ��");
		gotoxy(65, 16); printf("  �� ��    �� ��");
		gotoxy(65, 17); printf("  ��          ��");
		gotoxy(65, 18); printf("  ��������������");
	}
}