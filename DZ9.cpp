#include <iostream>
using namespace std;

int main()
{
	//1
	int num;
	cout << "Введите целое число: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}
	//2
	int num;
	cout << "Введите число: ";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		if ((i * i) % 24 == 1 || i == 2 || i == 3)
		{
			cout << i << " ";
		}
	}
	//3
	int num;
	bool temp = false;
	cout << "Введите число: ";
	cin >> num;
	while (num >= 10)
	{
		if ((num % 100) % 11 == 0)
		{
			cout << "В числе есть одинаковые цифры подряд\n";
			break;
		}
		else
		{
			num /= 10;
		}
	}
	//4
	int num;
	cout << "Введите число: ";
	cin >> num;
	for (;;)
	{
	int temp1 = num % 10;
	int temp2 = num % 100 / 10;   
	if (temp1 < temp2)
	{
	cout << "Цифры числа не расположены в неубывающем порядке.\n";
	break;
	}
	if (!num)
	{
	cout << "Все цифры числа расположены в неубывающем порядке.\n";
	break;
	}
	//5
	srand(time(0));
	int num = rand() % 1000 + 1;
	int answer;
	while (true)
	{
		cout << "Введите которое загадал компютер: ";
		cin >> answer;
		if (answer > num)
		{
			cout << "Число меньше\n";
		}
		else if (answer < num)
		{
			cout << "Число больше\n";
		}
		else if (answer == num)
		{
			cout << "Угадали!\n";
			break;
		}
	}
}
