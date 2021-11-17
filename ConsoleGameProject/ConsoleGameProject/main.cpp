#include<iostream>
#include<cstring>
#include<windows.h>
#include"GameEngine.h"
using namespace std;




int main()
{
	GameEngine Engine;
	Engine.init_game();
	Engine.title_draw();//메인 메뉴 출력
	Engine.menu_draw();
	return 0;
}









