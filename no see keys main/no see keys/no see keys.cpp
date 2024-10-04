#include <iostream>
#include <ctime>
#include <cstdlib>
#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <conio.h>
#include "keysfuncshen.h"
#include <locale.h>
using namespace std;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");
	HWND hwnd = GetForegroundWindow();
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);
	srand(time(NULL));
	int level = 5;
	do {
		char test[39];
		for (int i = 0; i < 39; i++) {
			test[i] = translateenglish(rand() % level + 10);
		}
		writerEN(test);

		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD cd;
		cd.X = 0;
		cd.Y = 0;
		SetConsoleCursorPosition(hd, cd);

		SetConsoleTextAttribute(hConsole, 14);
		cout << "_________________________________________" << endl;
		cout << "|                                       |" << endl;
		cout << "|";
		SetConsoleTextAttribute(hConsole, 8);
		int keys = 0;
		for (int i = 0; i < 39; i++) {
			char text;
			do {
				text = _getch();
				if (level > 4 && keys >= 4) {
					level--; keys = 0;
				}
				if (text == test[i]) {
					SetConsoleTextAttribute(hConsole, 15);
					cout << test[i];
				}else keys++;
			} while (text != test[i]);
		}
		SetConsoleTextAttribute(hConsole, 14);
		cout << "|" << endl;
		cout << "|                                       |";
		if(level<=26) level++;
	} while (true);}