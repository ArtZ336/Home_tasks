#include <iostream>
using namespace std;

int main()
{
	int N, M, month = 10;
	cout << "Введите степендию(в месяц): ";
	cin >> N;
	cout << "Введите расходы на проживание(в месяц): ";
	cin >> M;
	int sum1 = month * N;
	int sum2 = 0;

	for (int i = 0; i <= month; i++)
	{
		sum2 += M;
		M *= 1.03;
	}
	if (sum2 <= sum1)
	{
		cout << "Стипендии хватает\n";
	}
	else
	{
		cout << "Нужно денег " << sum2 - sum1 << "\n";
	}


}
