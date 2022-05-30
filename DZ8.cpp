#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//1
	int num = 100;
	while (num != 0)
	{
		if (num % 2 == 0)
			cout << num << "\n";
			num--;
	}
	//2
	int m, n, summ;
	cout << "Введите начало и конец диапазона: ";
	cin >> m >> n;
	while (m <= n)
	{
		summ = m + n;
		m++;
	}
	cout << summ;
	//3
	int start, stop;
	double c = 0;
	cout << "Введите диапазон: ";
	cin >> start >> stop;
	cout << "C	F\n";
	while (start <= stop + 1)
	{
		start++;
		cout << c << "	" << double(((c * 9 / 5) + 32)) << "\n";
		c++;
	}
	4
	int fact;
	cout << "Введите факториал числа: ";
	cin >> fact;
	cout << tgamma(fact + 1);
	//5
	int num, summ = 0, dig = 0, n;
	cout << "Введите число: ";
	cin >> num;
	n = num;
	while (num > 0)
	{
		num /= 10;
		dig++;
	}
	while (n > 0)
	{
		summ += n % 10;
		n /= 10;
	}
	cout << "Цифр: " << dig << "\n";
	cout << "Сумма: " << summ << "\n";

}
