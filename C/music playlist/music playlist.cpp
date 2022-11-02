
#include <graphics.h>//图形库 
#include <stdlib.h>
#include <string.h>
#include <mmsystem.h>//多媒体库 mciSendSting
#pragma comment(lib,"winmm.lib")

//封装按钮属性
typedef struct BUTTON
{
	int x, y;
	int xx, yy;
	COLORREF color;
	char* buttonstr;
}*PBTN;//按钮指针

//1、创建按钮
PBTN creatButton(int x, int y, int xx, int yy, const char* str)
{
	PBTN button = (PBTN)malloc(sizeof(PBTN));
	button->x = x;
	button->y = y;
	button->xx = xx;
	button->yy = yy;
	button->buttonstr = (char*)malloc(sizeof(char));//?
	strcpy(button->buttonstr, str);

	return button;
}
//2、绘制按钮图形
void drawButton(PBTN button)
{
	setfillcolor(button->color);
	setlinecolor(BLACK);
	fillrectangle(button->x, button->y, button->xx, button->yy);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(30, 0, "楷体");
	outtextxy(button->x + 15, button->y + 10, button->buttonstr);
}
//3、判断鼠标是否在按钮范围内
int isInButton(PBTN button, MOUSEMSG m)
{
	if (button->x <= m.x && button->xx >= m.x && button->y <= m.y && button->yy >= m.y)//判断范围
	{
		return 1;
	}
	else
		return 0;
}
//4、鼠标移动 显示效果
void mouseMove(PBTN button, MOUSEMSG m)
{
	if (isInButton(button, m))
	{
		button->color = RED;//鼠标在按钮范围内 红色
	}
	else
		button->color = YELLOW;//鼠标在按钮范围外 黄色

}
//5、鼠标是否点击按钮
int clickButton(PBTN button, MOUSEMSG m)
{
	if (isInButton(button, m))
	{
		if (m.uMsg == WM_LBUTTONDOWN)//4、鼠标是否左键按下
		{
			return 1;
		}
		else
			return 0;
	}

}

int main(void)
{
	initgraph(1080, 620);
	IMAGE picture;
	loadimage(&picture, "background.jpg", 1080, 620);
	putimage(0, 0, &picture);

	//初始化按钮
	PBTN play = creatButton(750, 200, 900, 250, "播放音乐");
	PBTN pause = creatButton(750, 270, 900, 320, "暂停音乐");
	PBTN resume = creatButton(750, 340, 900, 390, "继续音乐");
	PBTN close = creatButton(750, 410, 900, 460, "关闭音乐");


	while (1)
	{
		BeginBatchDraw();//开始批量绘制

		//绘制按钮图形
		drawButton(play);
		drawButton(pause);
		drawButton(resume);
		drawButton(close);

		MOUSEMSG m = GetMouseMsg();//获取鼠标信息

		//鼠标移动
		mouseMove(play, m);
		mouseMove(pause, m);
		mouseMove(resume, m);
		mouseMove(close, m);

		//鼠标点击
		if (clickButton(play, m) == 1)
		{
			mciSendString("play 1.mp3", 0, 0, 0);
		}
		if (clickButton(pause, m) == 1)
		{
			mciSendString("pause 1.mp3", 0, 0, 0);
		}
		if (clickButton(resume, m) == 1)
		{
			mciSendString("resume 1.mp3", 0, 0, 0);
		}
		if (clickButton(close, m) == 1)
		{
			mciSendString("close 1.mp3", 0, 0, 0);
		}

		EndBatchDraw();
	}
	closegraph();
	return 0;
}
