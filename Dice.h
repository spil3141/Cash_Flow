#include <stdio.h>
#include "Graphics.h"
#include "CONSTANTDECLARATIONS.h"


//=================================  Dice Distribtion ====================================// 
//          1. Player representation on Board   ～
//          2. Starting Position : gotoxytext(37, 39, "～");
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
		gotoxy(68, 20); printf("  旨收收收收收旬");     
		gotoxy(68, 21); printf("  早          早");
		gotoxy(68, 22); printf("  早          早");
		gotoxy(68, 24); printf("  早    ≒    早");
		gotoxy(68, 25); printf("  早          早");
		gotoxy(68, 26); printf("  早          早");
		gotoxy(68, 27); printf("  曲收收收收收旭");     
	}
	if (dice == 2)
	{
		gotoxy(68, 20); printf("  旨收收收收收旬");
		gotoxy(68, 21); printf("  早          早");
		gotoxy(68, 22); printf("  早    ≒    早");
		gotoxy(68, 24); printf("  早          早");
		gotoxy(68, 25); printf("  早    ≒    早");
		gotoxy(68, 26); printf("  早          早");
		gotoxy(68, 27); printf("  曲收收收收收旭");
	}
	if (dice == 3) 
	{
		gotoxy(68, 20); printf("  旨收收收收收旬");
		gotoxy(68, 21); printf("  早          早");
		gotoxy(68, 22); printf("  早    ≒    早");
		gotoxy(68, 24); printf("  早          早");
		gotoxy(68, 25); printf("  早 ≒    ≒ 早");
		gotoxy(68, 26); printf("  早          早");
		gotoxy(68, 27); printf("  曲收收收收收旭");
	}
	if (dice == 4) 
	{
		gotoxy(68, 20); printf("  旨收收收收收旬");
		gotoxy(68, 21); printf("  早          早");
		gotoxy(68, 22); printf("  早 ≒    ≒ 早");
		gotoxy(68, 24); printf("  早          早");
		gotoxy(68, 25); printf("  早 ≒    ≒ 早");
		gotoxy(68, 26); printf("  早          早");
		gotoxy(68, 27); printf("  曲收收收收收旭");
	}
	if (dice == 5) 
	{
		gotoxy(68, 20); printf("  旨收收收收收旬");
		gotoxy(68, 21); printf("  早          早");
		gotoxy(68, 22); printf("  早 ≒    ≒ 早");
		gotoxy(68, 24); printf("  早    ≒    早");
		gotoxy(68, 25); printf("  早 ≒    ≒ 早");
		gotoxy(68, 26); printf("  早          早");
		gotoxy(68, 27); printf("  曲收收收收收旭");
	}
	if (dice == 6) 
	{
		gotoxy(68, 20); printf("  旨收收收收收旬");
		gotoxy(68, 21); printf("  早          早");
		gotoxy(68, 22); printf("  早 ≒    ≒ 早");
		gotoxy(68, 24); printf("  早 ≒    ≒ 早");
		gotoxy(68, 26); printf("  早 ≒    ≒ 早");
		gotoxy(68, 27); printf("  早          早");
		gotoxy(68, 28); printf("  曲收收收收收旭");
	}
}

void DiceShape2(int dice2) {

	if (dice2 == 1) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早          早");
		gotoxy(65, 15); printf("  早    ≒    早");
		gotoxy(65, 16); printf("  早          早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 2) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早    ≒    早");
		gotoxy(65, 15); printf("  早          早");
		gotoxy(65, 16); printf("  早    ≒    早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 3) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早    ≒    早");
		gotoxy(65, 15); printf("  早          早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 4) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早 ≒    ≒ 早");
		gotoxy(65, 15); printf("  早          早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 5) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早 ≒    ≒ 早");
		gotoxy(65, 15); printf("  早    ≒    早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
	if (dice2 == 6) {
		gotoxy(65, 12); printf("  旨收收收收收旬");
		gotoxy(65, 13); printf("  早          早");
		gotoxy(65, 14); printf("  早 ≒    ≒ 早");
		gotoxy(65, 15); printf("  早 ≒    ≒ 早");
		gotoxy(65, 16); printf("  早 ≒    ≒ 早");
		gotoxy(65, 17); printf("  早          早");
		gotoxy(65, 18); printf("  曲收收收收收旭");
	}
}