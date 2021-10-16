// C program to draw a moving car. This
// program run in gcc compiler having
// graphics.h library installed
#include <graphics.h>
#include <stdio.h>

void draw_moving_car(void) {

	int i, j = 0, gd = DETECT, gm;
	initgraph(&gd, &gm, "");

	for (i = 0; i <= 420; i = i + 10) {

		setcolor(RED);

		
		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);


		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);
		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);
		line(0 + i, 330, 50 + i, 330);
		line(80 + i, 330, 130 + i, 330);
		line(210 + i, 330, 160 + i, 330);

		delay(100);
		cleardevice();
	}

	getch();

	closegraph();
}

int main()
{
	draw_moving_car();

	return 0;
}

