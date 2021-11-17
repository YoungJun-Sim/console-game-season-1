#include "GameEngine.h"
#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;

void GameEngine::gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void GameEngine::init_game() {
	system("mode con cols=80lines=30 | title = game");
}
void GameEngine::title_draw()
{

	cout << endl << endl << endl << endl;
	cout << "               " << "##### ##### ##### #####   " << endl;
	cout << "               " << "  #   #     #       #     " << endl;
	cout << "               " << "  #   ##### #####   #     " << endl;
	cout << "               " << "  #   #         #   #     " << endl;
	cout << "               " << "  #   ##### #####   #     " << endl;
	cout << endl << endl << endl << endl;
}
void GameEngine::menu_draw()
{
	gotoxy(23 - 2, 13);
	cout << "> 시작";
	gotoxy(23, 14);
	cout << "종료";
}
