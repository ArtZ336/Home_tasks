#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int height = 19, width = 40;
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (x < 20 && y < 10)
			{
				SetConsoleTextAttribute(h, 1);
			}
			else if (y % 2 == 0)
			{
				SetConsoleTextAttribute(h, 4);
			}
			else
			{
				SetConsoleTextAttribute(h, 7);;
			}
			if (x < 20  && y < 10 && y % 2 == 0 && x % 2 == 0)
			{
				SetConsoleTextAttribute(h, 7);
				cout << "* ";
			}
			else
			{
				cout << "▓▓";

			}
		}
		cout << "\n";
	}
	Sleep(INFINITE);
}
