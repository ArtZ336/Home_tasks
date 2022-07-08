#include <iostream>
#include <windows.h>
using namespace std;
//1
//void SetCursor(int x, int y, int colour)
//{
//	COORD loc = {x, y};
//	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorPosition(output, loc);
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(h, colour);
//}
//int main()
//{
//	int x, y, colour;
//	cout << "Введите координату x: ";
//	cin >> x;
//	cout << "Введите координату y: ";
//	cin >> y;
//	cout << "Введите цвет: ";
//	cin >> colour;
//	SetCursor(x, y, colour);
//}
//2
//void Cube(int num)
//{
//	num = num * num * num;
//	cout << num;
//}
//int main()
//{
//	int num;
//	cout << "Введите число: ";
//	cin >> num;
//	Cube(num);
//}
//3
bool IsPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			cout << "Число не простое";
			return false;
		}
		else
		{
			cout << "Число простое";
			return true;
		}
	}
}
int main()
{
	int num;
	cout << "Введите число: ";
	cin >> num;
	IsPrime(num);
}
