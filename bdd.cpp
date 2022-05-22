#include <graphics.h>
#include <conio.h>
#include<cmath>
#include<ctime>
#define P 3.141592653589
#define num 10
void lunkuo()
{
	setlinecolor(RGB(199, 201, 200));
	setlinestyle(PS_SOLID, 3);
	setfillcolor(WHITE);
	//耳朵
	fillcircle(230, 60, 30);
	fillcircle(420, 60, 30);
	FlushBatchDraw();
	Sleep(500);
	//身体
	fillcircle(325, 180, 150);
	FlushBatchDraw();
	Sleep(500);
	fillcircle(325, 200, 153);
	FlushBatchDraw();
	Sleep(500);
	fillcircle(325, 220, 145);
	FlushBatchDraw();
	Sleep(500);
	clearcircle(325, 180, 149);
	clearcircle(325, 200, 152);
	clearcircle(325, 220, 144);
	clearcircle(230, 60, 29);
	clearcircle(420, 60, 29);
	clearrectangle(240, 300, 410, 400);
	//左手
	fillcircle(140, 250, 30);
	FlushBatchDraw();
	Sleep(500);
	clearcircle(143, 247, 30);
	clearrectangle(170, 180, 180, 250);
	line(118, 230, 174, 180);
	FlushBatchDraw();
	Sleep(500);
	line(160, 273, 180, 250);
	FlushBatchDraw();
	Sleep(500);
	//右手
	fillcircle(500, 130, 33);
	FlushBatchDraw();
	Sleep(500);
	clearcircle(501, 160, 30);
	clearrectangle(460, 130, 500, 200);
	line(530, 143, 480, 200);
	FlushBatchDraw();
	Sleep(500);
	//脚
	roundrect(240, 300, 300, 390, 30, 20);
	FlushBatchDraw();
	Sleep(500);
	roundrect(350, 300, 410,390, 30, 20);
	FlushBatchDraw();
	Sleep(500);
	fillcircle(298, 385, 5);
	clearrectangle(280, 380, 299, 399);
	line(280, 390, 300, 390);
	FlushBatchDraw();
	Sleep(500);
	clearrectangle(239, 299, 411, 337);
	line(300, 340, 350, 340);
	FlushBatchDraw();
	Sleep(500);

}
void erduoandsizhi()
{
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 3);
	setfillcolor(BLACK);
	fillcircle(230, 60,15);
	FlushBatchDraw();
	Sleep(500);
	fillcircle(420, 60, 15);
	FlushBatchDraw();
	Sleep(500);
	setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 40);
	line(140, 250, 180, 210);
	FlushBatchDraw();
	Sleep(500);
	line(500, 130, 450, 190);
	FlushBatchDraw();
	Sleep(500);
	setlinestyle(PS_SOLID, 4);
	solidroundrect(250, 320, 290, 380, 30, 30);
	FlushBatchDraw();
	Sleep(500);
	solidroundrect(360, 320, 400, 380, 30, 30);
	FlushBatchDraw();
	Sleep(500);
	solidcircle(288, 375, 5);
	FlushBatchDraw();
	Sleep(500);
	line(270, 380, 286, 380);
	FlushBatchDraw();
	Sleep(500);
	line(290, 370, 290, 380);
	FlushBatchDraw();
	Sleep(500);
	clearcircle(325, 180, 149);
	clearcircle(325, 200, 139);
	FlushBatchDraw();
	Sleep(500);
}

void wucaixian()
{
	setlinestyle(PS_SOLID, 3);
	setlinecolor(RGB(0, 174, 255));
	ellipse(200,60,460,280);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(121, 9, 254));
	ellipse(205, 65, 455, 275);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(255, 70, 0));
	ellipse(210, 70, 450, 270);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(255, 248, 0));
	ellipse(215, 75, 445, 265);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(93, 252, 0));
	ellipse(220, 80, 440, 260);
	FlushBatchDraw();
	Sleep(500);
}
void yanjingandbiziandzuiba()
{
	setlinecolor(BLACK);
	setfillcolor(BLACK);
	setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 50);
	line(280, 140, 250, 170);
	FlushBatchDraw();
	Sleep(500);
	line(380, 140, 405, 165);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(WHITE); 
	solidcircle(275, 145, 15);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(RGB(0, 87, 89));
	solidcircle(275, 145, 13);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(BLACK);
	solidcircle(275, 148, 7);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(WHITE);
	solidcircle(275, 142, 3);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(WHITE);
	solidcircle(375, 145, 15);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(RGB(0, 87, 89));
	solidcircle(375, 145, 13);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(BLACK);
	solidcircle(375, 148, 7);
	FlushBatchDraw();
	Sleep(500);
	setfillcolor(WHITE);
	solidcircle(375, 142, 3);
	FlushBatchDraw();
	Sleep(500);

	setfillcolor(BLACK);
	solidellipse(320,150,350, 170);
	FlushBatchDraw();
	Sleep(500);
	setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 3);
	arc(285, 100, 385, 200,-P*11/16,-P*5/16);
	FlushBatchDraw();
	Sleep(500);
}
void wenzitubiao()
{
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 2);
	settextcolor(BLACK);
	settextstyle(10,8, _T(""));
	outtextxy(290, 290, _T("BEIJING 2022"));
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(6, 83, 163));
	circle(320,310,5);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(0,0,0));
	circle(332, 310, 5);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(248, 1, 0));
	circle(344, 310, 5);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(231, 186, 10));
	circle(326, 313, 5);
	FlushBatchDraw();
	Sleep(500);
	setlinecolor(RGB(54, 157, 43));
	circle(338, 313, 5);
	FlushBatchDraw();
	Sleep(500);
}
void aixin()
{
	setlinecolor(LIGHTRED);
	setlinestyle(PS_SOLID, 2);
	setfillcolor(LIGHTRED);
	solidcircle(498, 123,6);
	FlushBatchDraw();
	Sleep(500);
	solidcircle(507, 130, 6);
	FlushBatchDraw();
	Sleep(500);
	line(492,123,492,136);
	FlushBatchDraw();
	Sleep(500);
	line(507, 136, 492, 136);
	FlushBatchDraw();
	Sleep(500);
	line(492, 123, 507, 136);
	FlushBatchDraw();
	Sleep(500);
	floodfill(498, 130, LIGHTRED,0);
	FlushBatchDraw();
	Sleep(500);

}
void dream()
{
	settextcolor(BLACK);
	settextstyle(20, 10, _T(""));
	outtextxy(0, 0, _T("作者：甘"));
	outtextxy(0, 20, _T("工具：vs2017，EasyX"));
	settextstyle(40, 20, _T(""));
	settextcolor(RGB(76, 187, 255));
	FlushBatchDraw();
	Sleep(500);
	outtextxy(0, 440, _T("我也想要一个冰墩墩！"));
}
int main()
{
	initgraph(640, 480);
	HWND hwnd = GetHWnd();
	//设置窗口标题文字
	SetWindowText(hwnd, "冰墩墩");
	BeginBatchDraw();
	setbkcolor(WHITE);
	cleardevice();
	lunkuo();
	erduoandsizhi();
	wucaixian();
	yanjingandbiziandzuiba();
	wenzitubiao();
	aixin();
	dream();
	EndBatchDraw();
	_getch();
	closegraph();
	return 0;
}