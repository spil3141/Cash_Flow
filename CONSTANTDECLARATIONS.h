
//선언


//COLOR 
#define ORANGE /*FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_RED |*/ BACKGROUND_RED |BACKGROUND_GREEN | BACKGROUND_RED
#define BLUE  BACKGROUND_BLUE
#define PURPLE BACKGROUND_RED | BACKGROUND_BLUE 
#define RED   BACKGROUND_RED
#define GREEN BACKGROUND_GREEN
#define STARTCOLOR FOREGROUND_GREEN
#define YELLOW BACKGROUND_GREEN|BACKGROUND_RED
#define WHITE  FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN
#define INTESIFIED FOREGROUND_INTENSITY // text color is intensified
#define SETRESOLUTION system("mode con:cols=160 lines=50");
#define FULLRESOLUTION SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,NULL);
#define ONE 49   // 주사위 굴리다     # 1 
#define TWO 50   // REPAY            # 2
#define THREE 51  // BORROW		     # 3
#define FOUR 52   // 재무제표 보기    # 4
#define FIVE 53	 // 작은 기회         # 5 
#define SIX 54   // END ROUND        # 6 
#define EIGHT 56 // 큰 기회           # 8


