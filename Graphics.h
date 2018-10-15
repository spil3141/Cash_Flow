#pragma once

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include "CONSTANTDECLARATIONS.h"


// Functions needed for Graphics
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void settextcolor(char *color)
{
	if (strcmp(color, "BLUE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	}
	else if (strcmp(color, "RED") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	}
	else if (strcmp(color, "GREEN") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	}
	else if (strcmp(color, "YELLOW") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
	}
	else if (strcmp(color, "ORANGE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ORANGE);
	}
	else if (strcmp(color, "WHITE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	}
	else if (strcmp(color, "PURPLE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), PURPLE);
	}
	else if (strcmp(color, "STARTCOLOR") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), STARTCOLOR);
	}
	else if (strcmp(color, "NONE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf000000 | 0x0007);
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxy(int x, int y) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxytext(int x, int y, char *string) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	puts(string);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxychar(int x, int y, char *letter) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	printf("%s", letter);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxyint(int x, int y, int num) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	printf("%d", num);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void cursor_view(char s)      // 0������ �����, 1������ ���̱�
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = s;
	ConsoleCursor.dwSize = 2;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////Boards ////////////////////////////////////////////////////////////

void Board_FastTrack1()
{

	// TOP of the Fast Track 
	gotoxytext(10, 1, "������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	for (int i = 2; i < 63; i++)
	{
		if (i % 7 == 1)  // The intersection of the vertical and horizontal lines 
		{
			gotoxytext(10, i, "��");
			gotoxytext(230, i, "��");
		}
		else            // The normal Vertical lines 
		{
			gotoxytext(10, i, "��");
			gotoxytext(230, i, "��");
		}
	}
	// Inner rows and columns
	gotoxytext(30, 8, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	for (int i = 9; i < 57; i++) {
		if (i % 7 == 1) {
			gotoxytext(30, i, "����");
			gotoxytext(210, i, "����");
		}
		else {
			gotoxytext(30, i, "����");
			gotoxytext(210, i, "����");
		}
	}



	// Base of the Fast Track 
	gotoxytext(10, 63, "������������������������������������������");
	gotoxytext(190, 63, "������������������������������������������");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Board_FastTrack2()
{
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// TOP of the Fast Track 
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	gotoxytext(10, 1, "��������������������������������������������������������������������������������������������������������������������������������������");  // (11 * 9 ) + 12
	for (int i = 2; i < 43; i++)
	{
		if (i % 7 == 1)  // The intersection of the vertical and horizontal lines 
		{
			gotoxytext(10, i, "��");
			gotoxytext(142, i, "��");
		}
		else            // The normal Vertical lines 
		{
			gotoxytext(10, i, "��");
			gotoxytext(142, i, "��");
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Inner Vertical Borders
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	gotoxytext(22, 8, "��������������������������������������������������������������������������������������������������������������");
	for (int i = 9; i < 63; i++) {
		if (i % 7 == 1) {
			gotoxytext(30, i, "��");
			gotoxytext(210, i, "��");
		}
		else {
			gotoxytext(30, i, "��");
			gotoxytext(210, i, "��");
		}
	}
	gotoxytext(22, 57, "��������������������������������������������������������������������������������������������������������������");
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Inner Horizontal lines
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//LEFT SIDE 
	for (int j = 8; j < 62; j += 7) {
		for (int i = 12; i < 22; i += 2) {
			gotoxytext(i, j, "��");
		}
	}
	//RIGHT SIDE
	for (int j = 8; j < 62; j += 7) {
		for (int i = 212; i < 219; i += 2) {
			gotoxytext(i, j, "��");
		}
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////Inner Vertical lines
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//���� ���μ�
	for (int i = 30; i < 229; i += 20) {
		for (int j = 2; j < 8; j++) {
			gotoxytext(i, j, "��");
		}
	}

	//�Ʒ��� ���μ�
	for (int i = 30; i < 229; i += 20) {
		for (int j = 58; j <63; j++) {
			gotoxytext(i, j, "��");
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Base of the Fast Track 
	gotoxytext(10, 63, "��������������������������������������������������������������������������������������������������������������������������������������");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Board_FastTrack3()
{
	int pos_y = 1;
	int pos_x = 10;
	//�ܺ� �׵θ�
	gotoxytext(10, 1, "������������������������������������������������������������������������������������������������������������������������������������");
	for (int i = 2; i < 46; i++) {
		if (i % 5 == 1) {
			gotoxytext(10, i, "��");
			gotoxytext(140, i, "��");
		}
		else {
			gotoxytext(10, i, "��");
			gotoxytext(140, i, "��");
		}
	}
	gotoxytext(10, 46, "������������������������������������������������������������������������������������������������������������������������������������");

	//���� �׵θ� 
	//Inner top border 
	gotoxytext(20, 6, "����������������������������������������������������������������������������������������������������������������");
	//Inner botton Border
	gotoxytext(20, 41, "����������������������������������������������������������������������������������������������������������������");

	//���� ���μ�  // left side horozontal line 
	for (int j = 6; j < 46; j += 5) {
		for (int i = 12; i < 19; i += 2) { // 7 blocks
			gotoxytext(i, j, "��");
		}
	}

	////������ ���μ� // right side horozontal line 
	for (int j = 6; j < 46; j += 5) {
		for (int i = 132; i < 139; i += 2) {
			gotoxytext(i, j, "��");
		}
	}
	// Inner right and left Border 
	for (int i = 7; i < 41; i++) {
		if (i % 5 == 1) {
			gotoxytext(20, i, "��");
			gotoxytext(130, i, "��");
		}
		else {
			gotoxytext(20, i, "��");
			gotoxytext(130, i, "��");
		}
	}

	//���� ���μ�
	for (int i = 20; i < 133; i += 10) {
		for (int j = 2; j < 6; j++) {
			gotoxytext(i, j, "��");
		}
	}

	//�Ʒ��� ���μ�
	for (int i = 20; i < 133; i += 10) {
		for (int j = 42; j < 46; j++) {
			gotoxytext(i, j, "��");
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Board_RatRace()
{
	int pos_x = 49;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Top ROW 
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	gotoxytext(26, 12, "����������������������������������������������������������������������������������������������������");

	for (int i = 13; i < 40; i++)
	{
		if (i % 4 == 0)  // The intersection of the vertical and horizontal lines i == 13 || i == 18 || || i == 28|| i == 33 || i == 38
		{
			gotoxytext(26, i, "��");
			gotoxytext(124, i, "��");
		}
		else            // The normal Vertical lines 
		{
			gotoxytext(26, i, "��");
			gotoxytext(124, i, "��");
		}
	}
	//Base of Ratrace 
	gotoxytext(26, 40, "����������������������������������������������������������������������������������������������������");
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Inner rows and columns
	gotoxytext(40, 16, "������������������������������������������������������������������������");
	for (int i = 17; i < 36; i++) {
		if (i % 4 == 0) {
			gotoxytext(40, i, "��");
			gotoxytext(110, i, "��");
		}
		else {
			gotoxytext(40, i, "��");
			gotoxytext(110, i, "��");
		}
	}
	gotoxytext(40, 36, "������������������������������������������������������������������������");
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Inner Size Vertical and horizontal lines 
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//interal left horozontal rows
	for (int j = 16; j < 40; j += 4) {
		for (int i = 28; i < 40; i += 2) {
			gotoxytext(i, j, "��");
		}
	}
	//RIGHT SIDE horozontal rows
	for (int j = 16; j < 40; j += 4)
	{
		for (int i = 112; i < 124; i += 2)  // spacing 12 /2
		{
			gotoxytext(i, j, "��");
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////Inner Vertical lines

	////���� ���μ�
	for (int i = 40; i < 118; i += 14)
	{
		for (int j = 13; j < 16; j++)  // Spacing 3 blocks 
		{
			gotoxytext(i, j, "��");
		}
	}

	////�Ʒ��� ���μ�
	for (int i = 40; i <= 118; i += 14) {
		for (int j = 37; j <40; j++) {
			gotoxytext(i, j, "��");
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Content_Board()
{
	gotoxychar(45, 18, "��������������������������������������������������������������");
	for (int y = 19; y < 34; y++)
	{
		gotoxytext(45, y, "��");
		gotoxytext(105, y, "��");
	}
	gotoxychar(45, 34, "��������������������������������������������������������������");
}
//////////////////////////// Elements //////////////////////////////////////////////////////////////////////
void RatRace_Board_elements()
{
	/////////////////Pay check ����  3 �� //////////////////////////////////
	settextcolor("ORANGE");
	//gotoxytext(32, 13, "PAY ChECK");
	gotoxytext(32, 13, "����");
	settextcolor("NONE");
	settextcolor("ORANGE");
	//gotoxytext(116, 21, "PAY ChECK");
	gotoxytext(116, 21, "����");
	settextcolor("NONE");
	settextcolor("ORANGE");
	//gotoxytext(60, 37, "PAY ChECK");    //  up and down = y     right and left  = x 
	gotoxytext(60, 37, "����");
	settextcolor("NONE");

	/////////////////Deals/ ��ȸ ����  3 �� //////////////////////////////////
	settextcolor("GREEN");
	gotoxytext(46, 13, "��ȸ"); //plus 28
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(74, 13, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(102, 13, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(116, 17, "��ȸ"); //plus 8
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(116, 25, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(116, 33, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(102, 37, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(74, 37, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(46, 37, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(32, 17, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(32, 25, "��ȸ");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(32, 33, "��ȸ");
	settextcolor("NONE");
	/////////////////////// ���� /////////////////////////////////
	settextcolor("BLUE");
	gotoxytext(60, 13, "����");
	settextcolor("NONE");
	settextcolor("BLUE");
	gotoxytext(116, 29, "����");
	settextcolor("NONE");
	settextcolor("BLUE");
	gotoxytext(32, 37, "����");
	settextcolor("NONE");
	////////////////////// ���� / DOODADS////////////////////////
	settextcolor("RED");
	gotoxytext(88, 13, "����");
	settextcolor("NONE");
	settextcolor("RED");
	gotoxytext(116, 37, "����");
	settextcolor("NONE");
	settextcolor("RED");
	gotoxytext(32, 29, "����");
	settextcolor("NONE");
	///////////////////  ���� / charity //////////////////////////////////
	settextcolor("PURPLE");
	gotoxytext(116, 13, "����");
	settextcolor("NONE");
	///////////////////  ���� / charity //////////////////////////////////
	settextcolor("PURPLE");
	gotoxytext(88, 37, "���");
	settextcolor("NONE");
	///////////////////  ���� / charity //////////////////////////////////
	settextcolor("PURPLE");
	gotoxytext(32, 21, "�Ʊ�");
	settextcolor("NONE");
}

void FastTrack_Board_elements()
{
	///////////////////////////// ���� / Cashflow day ////////////////////////////////////////////////////
	settextcolor("YELLOW");
	gotoxytext(14, 2, "����");
	settextcolor("NONE");
	settextcolor("YELLOW");
	gotoxytext(134, 2, "����");
	settextcolor("NONE");
	settextcolor("YELLOW");
	gotoxytext(14, 42, "����");
	settextcolor("NONE");
	settextcolor("YELLOW");
	gotoxytext(134, 42, "����");
	settextcolor("NONE");



	///////////////////////////// ���Ʈ��  ////////////////////////////////////////////////////



	///////////////////////////// �� ////////////////////////////////////////////////////////


	///////////////////////////// �������� ////////////////////////////////////////////////////

	settextcolor("RED");
	gotoxytext(12, 22, "��������");
	settextcolor("NONE");

	///////////////////////////// ����//////////////////////////////////////////////////////

	settextcolor("PURPLE");
	gotoxytext(54, 2, "����"); // plus 10 
	settextcolor("NONE");

	///////////////////////////// ��ȥ //////////////////////////////////////////////////////

	settextcolor("RED");
	gotoxytext(44, 42, "��ȥ");
	settextcolor("NONE");

	///////////////////////////// �Ҽ� ////////////////////////////////////////////////////
	settextcolor("RED");
	gotoxytext(104, 2, "����"); // plus 10 
	settextcolor("NONE");
}