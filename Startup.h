#pragma once
#include <stdio.h>

void Boot_Screen()
{
	SETRESOLUTION
	int Menu_Input;
	settextcolor("STARTCOLOR");
	printf("\t\t\t\t\n           �ܡܡܡ�                                    \n");
	printf("\t\t\t\t\n        ��                                           \n");
	printf("\t\t\t\t\n      ��                                 ��      ��  \n");
	printf("\t\t\t\t\n      ��              ��      �� �� ��   ��      ��  \n");
	printf("\t\t\t\t\n      ��            ��  ��   ��          �ܡܡܡܡ�  \n");
	printf("\t\t\t\t\n      ��           ��    ��   �� �� ��   ��      ��  \n");
	printf("\t\t\t\t\n        ��         �ܡܡܡ�          ��  ��      ��  \n");
	printf("\t\t\t\t\n          �ܡܡܡ� ��    ��   �ܡ� ��    ��      ��  \n\n");
	printf("\t\t\t\t\n                              �ܡܡܡ�  ��                     \n");
	printf("\t\t\t\t\n                              ��        ��         �ܡܡ�   ��           ��\n");
	printf("\t\t\t\t\n                              �ܡܡܡ�  ��       ��      ��  ��   ��    ��\n");
	printf("\t\t\t\t\n                              ��        ��       ��      ��   �� �� �� ��\n");
	printf("\t\t\t\t\n                              ��        �ܡܡܡ�   �ܡܡ�       ��    ��\n");
	settextcolor("NONE");
	
	sndPlaySoundA(".\\Sounds\\StartUp.wav", SND_ASYNC | SND_NODEFAULT);
	gotoxy(45, 32); printf("��");
	Sleep(600);
	gotoxy(50, 32); printf("��");
	Sleep(600);
	gotoxy(55, 32); printf("��");
	Sleep(600);
	gotoxy(60, 32); printf("��");
	Sleep(600);
	gotoxy(65, 32); printf("��");
	Sleep(600);
	gotoxy(70, 32); printf("��");
	Sleep(600);
	gotoxy(75, 32); printf("��");
	Sleep(1000);
	sndPlaySoundA(".\\Sounds\\MANYDICE.WAV", SND_ASYNC | SND_NODEFAULT);

}

