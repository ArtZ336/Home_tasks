#include "Header.h"

Mystring::Mystring()
{
	str = new char[81];
	for (int i = 0; i < 81; i++)
	{
		str[i] = 0;
		size = 80;
	}
}
Mystring::Mystring(const char* str, int size)
{
	this->size = strlen(str);
	this->str = new char[this->size + 1];
	strcpy_s(this->str, strlen(str) + 1, str);
}
Mystring::Mystring(const char* str)
	{
	this->str = new char[size + 1];
	std::cout << "Введите строку: ";
	fgets(this->str, size + 1, stdin);
}
Mystring::~Mystring()
{
	delete[] str;
}
void Mystring::Input()
{
	std::cout << "Введите строку: ";
	std::cin >> str;
	std::cout << "Введите размер строки: ";
	std::cin >> size;
}
void Mystring::Output()
{
	std::cout << str;
}
