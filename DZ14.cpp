#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

int main()
{
	//1
	const int size = 10;
	int ar1[size] = {};
	int ar2[size] = {};
	int ar3[20] = {};
	int i, k;
	srand(time(0));
	for (i = 0; i < size; i++)
	{
		ar1[i] = rand() % 50 - 24;
		ar3[i] = ar1[i];
		cout << ar1[i] << " ";
	}
	k = i;
	cout << "\n";
	for (i = 0; i < size; i++)
	{
		ar2[i] = rand() % 50 - 24;
		ar3[k] = ar2[i];
		cout << ar2[i] << " ";
		k++;
	}
	cout << "\n";
	sort(ar3, ar3 + 20);
	reverse(ar3, ar3 + 20);
	for (i = 0; i < k; i++)
	{
		cout << ar3[i] << " ";
	}
	//2
	const int size = 10;
	int ar1[size] = {};
	int ar2[size] = {};
	int ar3[size + size] = {};
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		ar1[i] = rand() % 50 - 24;
	    cout << ar1[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		ar2[i] = rand() % 50 - 24;
	    cout << ar2[i] << " ";
	}
	int repeat = 0;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (ar1[i] == ar2[j]);
			{
				for (int k = 0; k < size + size; k++)
				{
					if (ar3[k] == ar2[j])
					{
						repeat++;
					}
				}
				if (repeat == 0)
				{
					ar3[index] = ar2[j];
					index++;
				}
				repeat = 0;
			}
		}
	}
	cout << "\n";
	for (int i = 0; i < size + size; i++)
	{
	    cout << ar3[i] << " ";
	}
	//3
	int count = 0, money = 0;
	const int num = 5;
	int ar[num] = {};
	srand(time(0));
	for (int i = 0; i < num; i++)
	{
		ar[i] = 1 + (rand() % (42 - 1 + 1));
	}
	cout << "Введите 5 чисел: ";
	int answer[num] = {};
	for (int i = 0; i < num; i++)
	{
		cin >> answer[i];
	}
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < num; k++)
		{
			if (answer[k] == ar[i] && answer[k] != 0)
			{
				count++;
			}
		}
	}
	switch (count)
	{
	case 1:
		money = 50;
		break;
	case 2:
		money = 100;
		break;
	case 3:
		money = 250;
		break;
	case 4:
		money = 500;
	case 5:
		money = 1000;
	default:
		cout << "Вы не угадали не одного числа!";
	}
	if (count > 0)
	{
		cout << "\nВы отгадали: " << count << " чисел\n" << "Вы выиграли: " << money << " гривен." << "\n";
	}
}
