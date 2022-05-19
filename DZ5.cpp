#include <iostream>
using namespace std;

int main()
{
	//1
	int xl, yl, xr, xl, x, y;
	cout << "Введите xl, yl, xr, yr, x, y: ";
	cin >> xl >> yl >> xr >> yr >> x >> y;
	if (((x >= xl && x <= xr) || (x <= xl && x >= xr)) && ((y >= yl && y <= yr) || (y <= yl && y >= yr)))
	{
		cout << "Точка принадлежит треугольнику";
	}
	else
	{
		cout << "Точка не принадлежит треугольнику";
	}
	//2
	int x1, y1, x2, y2;
	cout << "Введите координаты первой прямой: ";
	cin >> x1 >> y1;
	cout << "Введите координаты второй прямой: ";
	cin >> x2 >> y2;
	if (x1 == x2)
	{
		cout << "Прямая паралельна оси y";
	}
	else if (y1 == y2)
	{
		cout << "Прямая паралельна оси x";
	}
	else
	{
		cout << "Праямая не паралельна ни оси x, y";
	}
	//3
	double num;
	cout << "Введите число: ";
	cin >> num;
	if (num - int(num) == 0)
	{
		cout << "Число имеет дробную часть";
	}
	else
	{
		cout << "Число не имеет дробную часть";
	}
	//4
	int ticket;
	int dig1, dig2, dig3, dig4, dig5, dig6;
	cout << "Введите номер билета: ";
	cin >> ticket;
	dig1 = ticket / 100000 % 10;
	dig2 = ticket / 10000 % 10;
	dig3 = ticket / 1000 % 10;
	dig4 = ticket / 100 % 10;
	dig5 = ticket / 10 % 10;
	dig6 = ticket % 10;
	if ((dig1 + dig2 + dig3) == (dig4 + dig5 + dig6))
	{
		cout << "Билет счастливый";
	}
	else
	{
		cout << "Билет несчастливый";
	}
}
