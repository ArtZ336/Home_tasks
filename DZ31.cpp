#include <iostream>
#include "Header.h"

People::People()
{
	countid = 0;
	Fio = new char[7]{ "Blank" };
}

People::People(int _countid, const char* _fio)
{
	int count_fio;
	count_fio = strlen(_fio);

	Fio = new char[count_fio + 1];

	countid = _countid;
	strcpy_s(Fio, strlen(_fio) + 1, _fio);
}

People::People(const People& obj)
{
	int count_fio, countid;
	count_fio = strlen(obj.Fio);

	countid = obj.countid;

	Fio = new char[count_fio + 1];
	strcpy_s(Fio, strlen(obj.Fio) + 1, obj.Fio);
}

People::~People()
{
	delete[]Fio;
}

inline void People::ShowPeople(int countpeople, People* p)
{

	std::cout << "ФИО жильцов: " ;

	for (size_t i = 0; i < countpeople; i++)
	{
		std::cout << p[i].Fio << "\n";
	}

}

Flat::Flat()
{
	flat_number = 0;
	PeopleFlat = 0;
}

Flat::Flat(int _f, int countflat, People* p)
{
	flat_number[countflat] = _f;
	PeopleFlat = p;
}

void Flat::initFlat(int countflat, People* p)
{
	flat_number = new int[countflat] { 7, 2, 3 };
	PeopleFlat = p;
}

void Flat::ShowFlat(int countflat, int countpeople, People* p)
{
	std::cout << "Номера жилых квартир: ";
	for (size_t i = 0; i < countflat; i++)
	{
		std::cout << Flat::flat_number[i];
		if (i != countflat - 1)
			std::cout << ", ";
		else
			std::cout << ".";
	}
	std::cout << "\n";
	PeopleFlat->ShowPeople(countpeople, p);
}

Flat::Flat(const Flat& obj)
{
	flat_number = obj.flat_number;
	PeopleFlat = obj.PeopleFlat;
}

Flat::~Flat()
{
	delete[]flat_number;
	delete[]PeopleFlat;
}

House::House()
{
	house_number = 0;
	HouseFlat = 0;
}

House::House(int _h, Flat* _f)
{
	house_number = _h;
	HouseFlat = _f;
}

void House::init(int _h, int countflat, Flat* f)
{
	this->house_number = _h;
	HouseFlat = f;
}

void House::ShowHouse(int countflat, int countpeople, People* p)
{
	std::cout << "Номер дома: " << house_number << "\n";
	HouseFlat->ShowFlat(countflat, countpeople, p);
}

House::House(const House& obj)
{
	house_number = obj.house_number;
	HouseFlat = obj.HouseFlat;
}

House::~House()
{
	delete[] HouseFlat;
}
