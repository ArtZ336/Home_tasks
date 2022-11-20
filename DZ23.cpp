#include <iostream>

using namespace std;

#define max(a, b) if (a > b) cout << "Первое число больше"; else if (a < b) cout << "Второе число больше";
#define even(a) if(a % 2 == 0) cout << "Чётное"; else cout << "Нечётное";
int main()
{
	//1
	//int num1, num2;
	//cout << "Введите число: ";
	//cin >> num1;
	//cout << "Введите число: ";
	//cin >> num2;
	//max(num1,num2);
	//2
	int num;
	cout << "Введите число: ";
	cin >> num;
	even(num);
}
