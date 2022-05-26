#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//1
	int height, weight, gender;
	cout << "Введите рост и вес: ";
	cin >> height >> weight;
	int idealM = height - 100;
	int idealF = height - 110;
	cout << "Введите свой пол(1 - М, 2 - Ж): ";
	cin >> gender;
	switch (gender)
	{
	case 1:
	{
		if (weight == idealM)
		{
			cout << "У вас идеальный вес\n";
		}
		else if (weight > idealM)
		{
			cout << "Нужно сбросить для идеального веса " << idealM - weight << " кг\n";
		}
		else
		{
			cout << "Нужно набрать для идеального веса " << weight - idealM << " кг\n";
		}
		break;
	}
	case 2:
	{
		if (weight == idealF)
		{
			cout << "У вас идеальный вес\n";
		}
		else if (weight > idealF)
		{
			cout << "Нужно сбросить для идеального веса " << idealF - weight << " кг\n";
		}
		else
		{
			cout << "Нужно набрать для идеального веса " << weight - idealF << " кг\n";
			break;
		}
	}
	}
	}
	//2
	SYSTEMTIME time;
	GetSystemTime(&time);
	int day, month, year;
	cout << "Введите дату: ";
	cin >> day >> month >> year;
	int day_check = time.wDay;
	int month_check = time.wMonth;
	int year_check = time.wYear;
	if (day == day_check && month == month_check && year == year_check)
	{
		cout << "Дата совпадает\n";
		cout << "Дата следующего дня " << (day_check + 1) << " " << month_check << " " << year_check << "\n";
	}
	else
	{
		cout << "Дата не совпадает";
	}
	//3
	int temp;
	cout << "Введите температуру за окном: ";
	cin >> temp;
	if (temp >= 10 && temp > 0)
	{
		cout << "Холодно";
	}
	else if (temp > 10 && temp <= 25)
	{
		cout << "Тепло";
	}
	else if (temp < 25)
	{
		cout << "Жарко";
	}
	else if (temp <= 0)
	{
		cout << "Мороз";
	}
	srand(time(0));
	rand();
	int mintemp = temp - 5;
	int maxtemp = temp + 5;
	int res = maxtemp - mintemp + 1;
	int temp2 = rand() % res + mintemp;
	int windmin = 0;
	int windmax = 25;
	int wind = windmax - windmin + 1;
	int wind2 = rand() % wind + windmin;
	int rain = 0;
	int norain = 1;
	int rain = rain - norain + 1;
	int rain2 = rand() % rain + norain;
	int seatemp = temp2 - 5;
	cout << "Температура воздуха : " << temp2 << "\n";
	cout << "Скорость ветра: " << wind2 << "\n";
	switch (rain2)
	{
	case 0:
	{
		cout << "Возможны осадки\n";
		break;
	}
	case 1:
	{
		cout << "Осадков не предвидится\n";
		break;
	}
	default:
	{
		cout << "Произошла ошибка.\n";
	}
	}
	cout << "Температура воды в Чёрном море: " << seatemp << "\n";
	//4
	int chicken, buy, eggs, sell;
	cout << "Введите количество куриц и цену за одну курицу: ";
	cin >> chicken >> buy;
	cout << "Введите сколько несет одна курица яиц в неделю и цена продажи яиц: ";
	cin >> eggs >> sell;
	int price = chicken * buy;
	int egg = chicken * eggs;
	int money = (chicken / 10) * eggs;
	int day = (price / money) * 7;
	double daytax = price / (money - (money / 100 * 20)) * 7;
	cout << "Окупиться через - " << day << "без учёта НДС";
	cout << "Окупиться через - " << daytax << "с учётом НДС";
}
