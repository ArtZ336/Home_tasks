#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	//1
	/*int num1, num2, num3;
	cout << "Введите три числа: ";
	cin >> num1 >> num2 >> num3;
	if (num1 < num2 && num1 < num3)
		cout << num1 << " - самое маленькое число\n";
	else if (num2 < num1 && num2 < num3)
		cout << num2 << " - самое маленькое число\n";
	else if (num3 < num1 && num3 < num2)
		cout << num3 << " - самое маленькое число\n";
	//2
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (num < 0)
		cout << "Число отрицательное";
	else if (num > 0)
		cout << "Число положительное";
	else if (num == 0)
		cout << "Число равно нулю";
	//3
	string choice;
	int a, b;
	cout << "Введите два числa: ";
	cin >> a >> b;
	cout << "1) a + b\n";
	cout << "2) a – b\n";
	cout << "3) a * b\n";
	cout << "4) a / b\n";
	cout << "5) a % b\n";
	cout << "Выберите операцию с числами: ";
	cin >> choice;
	if (choice == "1")
		cout << a + b;
	else if (choice == "2")
		cout << a - b;
	else if (choice == "3")
		cout << a * b;
	else if (choice == "4" && a != 0 && b != 0)
		cout << a / b;
	else if (choice == "5" && a != 0 && b != 0)
		cout << a % b;
	else
		cout << "Ошибка ввода";
	//4
	char sym;
	cout << "Введите один символ: ";
	cin >> sym;
	if (isalpha(sym))
		cout << sym << " это буква";
	else if (isalnum(sym))
		cout << sym << " это цифра";
	else if (ispunct(sym))
		cout << sym << " это знак пунктуации";
	//5
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
		cout << "Число кратно 3, 5, 7 одновременно";
	else
		cout << "Число не кратно 3, 5, 7 одновременно";*/
	//6
	int num, time;
	cout << "Введите число с 4-мя разрядами: ";
	cin >> num;
	if (num >= 9999)
		while (num != 0)
		{
			num /= 10;
			time += 1;
		}
	cout << time << " - цифр в числе";

}
