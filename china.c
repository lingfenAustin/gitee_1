#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
const double PI = 3.1415927;

void Drawstar(int x, int y, int R, double arcbegin)
{
	POINT pt[10];
	double r = r * sin(18 * PI / 180) / sin(126 * PI / 180);
	double arc = PI / 5.0;
	double r1;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			r1 = R;
		else
			r1 = r;
		pt[i].y = sin(arcbegin + i * arc) * r1 + y;
		pt[i].x = cos(arcbegin + i * arc) * r1 + x;

		}
	setfillcolor(RGB(255, 255, 0));
	setcolor(RGB(255, 255, 0));
	fillpolygon(pt, 10);

}
int main()
{
	initgraph(900, 600);
	setlinecolor(RGB(255, 0, 0));
	setfillcolor(RGB(255, 0, 0));
	fillrectangle(0, 0, 900, 600);

	DrawStar(150, 150, 90, -PI / 2);
	DrawStar(300, 60, 30, -PI - atan(3.0 / 5));
	DrawStar(360, 120, 30, -PI - atan(1.0 / 7));
	DrawStar(360, 210, 30, -PI + atan(2.0 / 7));
	DrawStar(300, 270, 30, -PI + atan(4.0 / 5));

	_getch();
	closegraph();
	0;
}

