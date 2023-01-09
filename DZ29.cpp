#include <iostream>

class Book
{
	std::string name;
	std::string surname;
	char* patronymic;
	int hnumber;
	int wnumber;
	int mnumber;
public:
	Book(std::string name, std::string surname, const char* patronymic, int hnumber, int wnumber, int mnumber)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = new char[strlen(patronymic) + 1];
		strcpy_s(this->patronymic, strlen(patronymic) + 1, patronymic);
		this->hnumber = hnumber;
		this->wnumber = wnumber;
		this->mnumber = mnumber;
	}
	void AddSubscriber(std::string name, std::string surname, const char* patronymic, int hnumber, int wnumber, int mnumber)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = new char[strlen(patronymic) + 1];
		strcpy_s(this->patronymic, strlen(patronymic) + 1, patronymic);
		this->hnumber = hnumber;
		this->wnumber = wnumber;
		this->mnumber = mnumber;
	}

	void ShowSubscriber()
	{
		std::cout << "Имя: " << name << "\n";
		std::cout << "Фамилия: " << surname << "\n";
		std::cout << "Отчество: " << patronymic << "\n";
		std::cout << "Дом. номер: " << hnumber << "\n";
		std::cout << "Рабочий номер: " << wnumber << "\n";
		std::cout << "Моб. номер: " << mnumber << "\n";
	}
	~Book()
	{
		delete[] patronymic;
	}
};

int main()
{

}
