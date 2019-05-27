#include <conio.h> 
#include <iostream> 
#include "Drawing.h"


using namespace std; 
int main() {
	char a[][11] = { { "----45----" },{ "---ABCD---" },{ "---EFG----" },{ "----------" } };
	image img;
	img.width = 10;
	img.height = 4;
	img.data = a[0];
	unsigned int X, Y;
	X = 10;
	Y = 10;

	Drawing screen;
	int i = 0;
	while (true) {
		screen.setPixel(X, Y, true);
		screen.flushScreen();
		Sleep(50);
		if (_kbhit()) {
			char ch = _getch();
			if (ch == 119) {//up
				screen.setPixel(X, Y, false);
				X = (X - 1);
			}
			if (ch == 115) {//down
				screen.setPixel(X, Y, false);
				X = (X + 1);
			}
			if (ch == 97) {//left
				screen.setPixel(X, Y, false);
				Y = (Y - 1);
			}
			if (ch == 100) {//right
				screen.setPixel(X, Y, false);
				Y = (Y + 1);
			}
			if (ch == 27) {//ESC
				break;
			}
		}
	}
}
