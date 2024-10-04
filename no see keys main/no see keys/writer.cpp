#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
using namespace std;

void writerEN(char text[]) { 
	// ��������� � ������� ��������� �������� ===================================
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cd;
	cd.X = 0;
	cd.Y = 0;
	SetConsoleCursorPosition(hd, cd);

	// ��������� ������ ===========================================================
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 64;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	// ��������� ���������� ========================================================
	SetConsoleTextAttribute(hConsole, 14);
	cout << "_________________________________________" << endl;
	cout << "|                                       |" << endl;
	cout << "|";
	SetConsoleTextAttribute(hConsole, 8);
	for (int i = 0; i < 39; i++) {
		cout << text[i];
	}
	SetConsoleTextAttribute(hConsole, 14);
	cout << "|" << endl;
	cout << "|                                       |" << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "-----------------------------------------" << endl;
	cout << "| q | w | e | r | t | y | u | i | o | p |" << endl;
	cout << "| | a | s | d | f | g | h | j | k | l | |" << endl;
	cout << "|     | z | x | c | v | b | n | m |     |" << endl;
	cout << "-----------------------------------------" << endl;
}

void writerRU(char text[]) {
	// ��������� � ������� ��������� �������� ===================================
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cd;
	cd.X = 0;
	cd.Y = 0;
	SetConsoleCursorPosition(hd, cd);

	// ��������� ������ ===========================================================
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 64;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	// ��������� ���������� ========================================================
	SetConsoleTextAttribute(hConsole, 14);
	cout << "_________________________________________" << endl;
	cout << "|                                       |" << endl;
	cout << "|";
	SetConsoleTextAttribute(hConsole, 8);
	for (int i = 0; i < 39; i++) {
		cout << text[i];
	}
	SetConsoleTextAttribute(hConsole, 14);
	cout << "|" << endl;
	cout << "|                                       |" << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "-----------------------------------------" << endl;
	cout << "|� |� |� |� | � | � | � | � | �| �| �| �|" << endl;
	cout << "|� |� | � | � | � | � | � | � | � | �| �|" << endl;
	cout << "| | � | � | � | � | � | � | � | � | � | |" << endl;
	cout << "-----------------------------------------" << endl;
}