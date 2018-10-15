#pragma once
#include <stdio.h>

void Boot_Screen()
{
	SETRESOLUTION
	int Menu_Input;
	settextcolor("STARTCOLOR");
	printf("\t\t\t\t\n           ¡Ü¡Ü¡Ü¡Ü                                    \n");
	printf("\t\t\t\t\n        ¡Ü                                           \n");
	printf("\t\t\t\t\n      ¡Ü                                 ¡Ü      ¡Ü  \n");
	printf("\t\t\t\t\n      ¡Ü              ¡Ü      ¡Ü ¡Ü ¡Ü   ¡Ü      ¡Ü  \n");
	printf("\t\t\t\t\n      ¡Ü            ¡Ü  ¡Ü   ¡Ü          ¡Ü¡Ü¡Ü¡Ü¡Ü  \n");
	printf("\t\t\t\t\n      ¡Ü           ¡Ü    ¡Ü   ¡Ü ¡Ü ¡Ü   ¡Ü      ¡Ü  \n");
	printf("\t\t\t\t\n        ¡Ü         ¡Ü¡Ü¡Ü¡Ü          ¡Ü  ¡Ü      ¡Ü  \n");
	printf("\t\t\t\t\n          ¡Ü¡Ü¡Ü¡Ü ¡Ü    ¡Ü   ¡Ü¡Ü ¡Ü    ¡Ü      ¡Ü  \n\n");
	printf("\t\t\t\t\n                              ¡Ü¡Ü¡Ü¡Ü  ¡Ü                     \n");
	printf("\t\t\t\t\n                              ¡Ü        ¡Ü         ¡Ü¡Ü¡Ü   ¡Ü           ¡Ü\n");
	printf("\t\t\t\t\n                              ¡Ü¡Ü¡Ü¡Ü  ¡Ü       ¡Ü      ¡Ü  ¡Ü   ¡Ü    ¡Ü\n");
	printf("\t\t\t\t\n                              ¡Ü        ¡Ü       ¡Ü      ¡Ü   ¡Ü ¡Ü ¡Ü ¡Ü\n");
	printf("\t\t\t\t\n                              ¡Ü        ¡Ü¡Ü¡Ü¡Ü   ¡Ü¡Ü¡Ü       ¡Ü    ¡Ü\n");
	settextcolor("NONE");
	
	sndPlaySoundA(".\\Sounds\\StartUp.wav", SND_ASYNC | SND_NODEFAULT);
	gotoxy(45, 32); printf("¢º");
	Sleep(600);
	gotoxy(50, 32); printf("¢º");
	Sleep(600);
	gotoxy(55, 32); printf("¢º");
	Sleep(600);
	gotoxy(60, 32); printf("¢º");
	Sleep(600);
	gotoxy(65, 32); printf("¢º");
	Sleep(600);
	gotoxy(70, 32); printf("¢º");
	Sleep(600);
	gotoxy(75, 32); printf("¢º");
	Sleep(1000);
	sndPlaySoundA(".\\Sounds\\MANYDICE.WAV", SND_ASYNC | SND_NODEFAULT);

}

