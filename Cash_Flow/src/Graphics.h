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
void cursor_view(char s)      // 0厥戲賊 獗晦晦, 1厥戲賊 爾檜晦
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
	gotoxytext(10, 1, "旨收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收有收收收收收收收收收旬");
	for (int i = 2; i < 63; i++)
	{
		if (i % 7 == 1)  // The intersection of the vertical and horizontal lines 
		{
			gotoxytext(10, i, "曳");
			gotoxytext(230, i, "朽");
		}
		else            // The normal Vertical lines 
		{
			gotoxytext(10, i, "早");
			gotoxytext(230, i, "早");
		}
	}
	// Inner rows and columns
	gotoxytext(30, 8, "朱收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朴收收收收收收收收收朱");
	for (int i = 9; i < 57; i++) {
		if (i % 7 == 1) {
			gotoxytext(30, i, "朽曳");
			gotoxytext(210, i, "朽曳");
		}
		else {
			gotoxytext(30, i, "早早");
			gotoxytext(210, i, "早早");
		}
	}



	// Base of the Fast Track 
	gotoxytext(10, 63, "曲收收收收收收收收收朴收收收收收收收收收旭");
	gotoxytext(190, 63, "曲收收收收收收收收收朴收收收收收收收收收旭");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Board_FastTrack2()
{
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// TOP of the Fast Track 
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	gotoxytext(10, 1, "旨收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收旬");  // (11 * 9 ) + 12
	for (int i = 2; i < 43; i++)
	{
		if (i % 7 == 1)  // The intersection of the vertical and horizontal lines 
		{
			gotoxytext(10, i, "曳");
			gotoxytext(142, i, "朽");
		}
		else            // The normal Vertical lines 
		{
			gotoxytext(10, i, "早");
			gotoxytext(142, i, "早");
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Inner Vertical Borders
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	gotoxytext(22, 8, "朱收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朱");
	for (int i = 9; i < 63; i++) {
		if (i % 7 == 1) {
			gotoxytext(30, i, "朽");
			gotoxytext(210, i, "曳");
		}
		else {
			gotoxytext(30, i, "早");
			gotoxytext(210, i, "早");
		}
	}
	gotoxytext(22, 57, "朱收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收有收收收收收朱");
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Inner Horizontal lines
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//LEFT SIDE 
	for (int j = 8; j < 62; j += 7) {
		for (int i = 12; i < 22; i += 2) {
			gotoxytext(i, j, "收");
		}
	}
	//RIGHT SIDE
	for (int j = 8; j < 62; j += 7) {
		for (int i = 212; i < 219; i += 2) {
			gotoxytext(i, j, "收");
		}
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////Inner Vertical lines
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//嶺薹 撮煎摹
	for (int i = 30; i < 229; i += 20) {
		for (int j = 2; j < 8; j++) {
			gotoxytext(i, j, "早");
		}
	}

	//嬴概薹 撮煎摹
	for (int i = 30; i < 229; i += 20) {
		for (int j = 58; j <63; j++) {
			gotoxytext(i, j, "早");
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Base of the Fast Track 
	gotoxytext(10, 63, "曲收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收朴收收收收收旭");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Board_FastTrack3()
{
	int pos_y = 1;
	int pos_x = 10;
	//諼睡 纔舒葬
	gotoxytext(10, 1, "旨收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收旬");
	for (int i = 2; i < 46; i++) {
		if (i % 5 == 1) {
			gotoxytext(10, i, "曳");
			gotoxytext(140, i, "朽");
		}
		else {
			gotoxytext(10, i, "早");
			gotoxytext(140, i, "早");
		}
	}
	gotoxytext(10, 46, "曲收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收旭");

	//頂睡 纔舒葬 
	//Inner top border 
	gotoxytext(20, 6, "朱收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朴收收收收朱");
	//Inner botton Border
	gotoxytext(20, 41, "朱收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收有收收收收朱");

	//豭薹 陛煎摹  // left side horozontal line 
	for (int j = 6; j < 46; j += 5) {
		for (int i = 12; i < 19; i += 2) { // 7 blocks
			gotoxytext(i, j, "收");
		}
	}

	////螃艇薹 陛煎摹 // right side horozontal line 
	for (int j = 6; j < 46; j += 5) {
		for (int i = 132; i < 139; i += 2) {
			gotoxytext(i, j, "收");
		}
	}
	// Inner right and left Border 
	for (int i = 7; i < 41; i++) {
		if (i % 5 == 1) {
			gotoxytext(20, i, "朽");
			gotoxytext(130, i, "曳");
		}
		else {
			gotoxytext(20, i, "早");
			gotoxytext(130, i, "早");
		}
	}

	//嶺薹 撮煎摹
	for (int i = 20; i < 133; i += 10) {
		for (int j = 2; j < 6; j++) {
			gotoxytext(i, j, "早");
		}
	}

	//嬴概薹 撮煎摹
	for (int i = 20; i < 133; i += 10) {
		for (int j = 42; j < 46; j++) {
			gotoxytext(i, j, "早");
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
	gotoxytext(26, 12, "旨收收收收收收有收收收收收收有收收收收收收有收收收收收收有收收收收收收有收收收收收收有收收收收收收旬");

	for (int i = 13; i < 40; i++)
	{
		if (i % 4 == 0)  // The intersection of the vertical and horizontal lines i == 13 || i == 18 || || i == 28|| i == 33 || i == 38
		{
			gotoxytext(26, i, "曳");
			gotoxytext(124, i, "朽");
		}
		else            // The normal Vertical lines 
		{
			gotoxytext(26, i, "早");
			gotoxytext(124, i, "早");
		}
	}
	//Base of Ratrace 
	gotoxytext(26, 40, "曲收收收收收收朴收收收收收收朴收收收收收收朴收收收收收收朴收收收收收收朴收收收收收收朴收收收收收收旭");
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Inner rows and columns
	gotoxytext(40, 16, "朱收收收收收收朴收收收收收收朴收收收收收收朴收收收收收收朴收收收收收收朱");
	for (int i = 17; i < 36; i++) {
		if (i % 4 == 0) {
			gotoxytext(40, i, "朽");
			gotoxytext(110, i, "曳");
		}
		else {
			gotoxytext(40, i, "早");
			gotoxytext(110, i, "早");
		}
	}
	gotoxytext(40, 36, "朱收收收收收收有收收收收收收有收收收收收收有收收收收收收有收收收收收收朱");
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Inner Size Vertical and horizontal lines 
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//interal left horozontal rows
	for (int j = 16; j < 40; j += 4) {
		for (int i = 28; i < 40; i += 2) {
			gotoxytext(i, j, "收");
		}
	}
	//RIGHT SIDE horozontal rows
	for (int j = 16; j < 40; j += 4)
	{
		for (int i = 112; i < 124; i += 2)  // spacing 12 /2
		{
			gotoxytext(i, j, "收");
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////Inner Vertical lines

	////嶺薹 撮煎摹
	for (int i = 40; i < 118; i += 14)
	{
		for (int j = 13; j < 16; j++)  // Spacing 3 blocks 
		{
			gotoxytext(i, j, "早");
		}
	}

	////嬴概薹 撮煎摹
	for (int i = 40; i <= 118; i += 14) {
		for (int j = 37; j <40; j++) {
			gotoxytext(i, j, "早");
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Content_Board()
{
	gotoxychar(45, 18, "旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	for (int y = 19; y < 34; y++)
	{
		gotoxytext(45, y, "早");
		gotoxytext(105, y, "早");
	}
	gotoxychar(45, 34, "曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
}
//////////////////////////// Elements //////////////////////////////////////////////////////////////////////
void RatRace_Board_elements()
{
	/////////////////Pay check 奢除  3 廓 //////////////////////////////////
	settextcolor("ORANGE");
	//gotoxytext(32, 13, "PAY ChECK");
	gotoxytext(32, 13, "瑰晝");
	settextcolor("NONE");
	settextcolor("ORANGE");
	//gotoxytext(116, 21, "PAY ChECK");
	gotoxytext(116, 21, "瑰晝");
	settextcolor("NONE");
	settextcolor("ORANGE");
	//gotoxytext(60, 37, "PAY ChECK");    //  up and down = y     right and left  = x 
	gotoxytext(60, 37, "瑰晝");
	settextcolor("NONE");

	/////////////////Deals/ 晦�� 奢除  3 廓 //////////////////////////////////
	settextcolor("GREEN");
	gotoxytext(46, 13, "晦��"); //plus 28
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(74, 13, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(102, 13, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(116, 17, "晦��"); //plus 8
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(116, 25, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(116, 33, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(102, 37, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(74, 37, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(46, 37, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(32, 17, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(32, 25, "晦��");
	settextcolor("NONE");
	settextcolor("GREEN");
	gotoxytext(32, 33, "晦��");
	settextcolor("NONE");
	/////////////////////// 衛濰 /////////////////////////////////
	settextcolor("BLUE");
	gotoxytext(60, 13, "衛濰");
	settextcolor("NONE");
	settextcolor("BLUE");
	gotoxytext(116, 29, "衛濰");
	settextcolor("NONE");
	settextcolor("BLUE");
	gotoxytext(32, 37, "衛濰");
	settextcolor("NONE");
	////////////////////// 雖轎 / DOODADS////////////////////////
	settextcolor("RED");
	gotoxytext(88, 13, "雖轎");
	settextcolor("NONE");
	settextcolor("RED");
	gotoxytext(116, 37, "雖轎");
	settextcolor("NONE");
	settextcolor("RED");
	gotoxytext(32, 29, "雖轎");
	settextcolor("NONE");
	///////////////////  晦隸 / charity //////////////////////////////////
	settextcolor("PURPLE");
	gotoxytext(116, 13, "晦隸");
	settextcolor("NONE");
	///////////////////  晦隸 / charity //////////////////////////////////
	settextcolor("PURPLE");
	gotoxytext(88, 37, "蹴模");
	settextcolor("NONE");
	///////////////////  晦隸 / charity //////////////////////////////////
	settextcolor("PURPLE");
	gotoxytext(32, 21, "嬴晦");
	settextcolor("NONE");
}

void FastTrack_Board_elements()
{
	///////////////////////////// 瑰旎 / Cashflow day ////////////////////////////////////////////////////
	settextcolor("YELLOW");
	gotoxytext(14, 2, "瑰旎");
	settextcolor("NONE");
	settextcolor("YELLOW");
	gotoxytext(134, 2, "瑰旎");
	settextcolor("NONE");
	settextcolor("YELLOW");
	gotoxytext(14, 42, "瑰旎");
	settextcolor("NONE");
	settextcolor("YELLOW");
	gotoxytext(134, 42, "瑰旎");
	settextcolor("NONE");



	///////////////////////////// 餌機お濠  ////////////////////////////////////////////////////



	///////////////////////////// 翎 ////////////////////////////////////////////////////////


	///////////////////////////// 撮鼠馬餌 ////////////////////////////////////////////////////

	settextcolor("RED");
	gotoxytext(12, 22, "撮鼠馬餌");
	settextcolor("NONE");

	///////////////////////////// 晦隸//////////////////////////////////////////////////////

	settextcolor("PURPLE");
	gotoxytext(54, 2, "晦隸"); // plus 10 
	settextcolor("NONE");

	///////////////////////////// 檜�� //////////////////////////////////////////////////////

	settextcolor("RED");
	gotoxytext(44, 42, "檜��");
	settextcolor("NONE");

	///////////////////////////// 模歎 ////////////////////////////////////////////////////
	settextcolor("RED");
	gotoxytext(104, 2, "晦隸"); // plus 10 
	settextcolor("NONE");
}