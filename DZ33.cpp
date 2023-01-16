Worker::Worker(std::string Fio, std::string position, int year, float salary)
{
	this->Fio = Fio;
	this->position = position;
	this->year = year;
	this->salary = salary;
}
void const Worker::Output()
{
	std::cout << "ФИО: " << Fio << "\n";
	std::cout << "Должность: " << position << "\n";
	std::cout << "Год поступления на роботу: " << year << "\n";
	std::cout << "Зарплата: " << salary << "\n";
}
void Worker::Input()
{
	std::cout << "Вветие ФИО: ";
	std::cin >> Fio;
	std::cout << "Введите должность: ";
	std::cin >> position;
	std::cout << "Введите год поступления на роботу: ";
	std::cin >> year;
	std::cout << "Введите зарплату: ";
	std::cin >> salary;
}

void Worker::PosList(std::string pos)
{
	if (position == pos)
	{
		std::cout << Fio << "\n";
	}
}

void Worker::SalList(int sal)
{
	if (salary > sal)
	{
		std::cout << Fio << "\n";
	}
}

void Worker::ExpList(int y, int current)
{
	int Year = this->year - current;
	if (Year > y)
	{
		std::cout << Fio << "\n";
	}
}

int main()
{
	int n;
	std::cout << "Введите кол-во сотрудников: "; 
	std::cin >> n;
	Worker* worker = new Worker[n];
	for (int i = 0; i < n; i++)
	{
		worker[i].Input();
	}
	std::cout << "Список сотрудников: " << "\n";
	for (int i = 0; i < n; i++)
	{
		worker[i].Output();
	}
	std::string post;
	std::cout << "Введите должность: ";
	std::cin >> post;
	for (int i = 0; i < n; i++)
	{
		worker[i].PosList(post);
	}
	int salary;
	std::cout << "Введите зарплату: "; 
	std::cin >> salary;
	for (int i = 0; i < n; i++)
	{
		worker[i].SalList(salary);
	}
	int current, year;
	std::cout << "Введите текущий год: ";
	std::cin >> current;
	std::cout << "Введите кол-во рабочих лет: ";
	std::cin >> year;
	for (int i = 0; i < n; i++)
	{
		worker[i].ExpList(year, current);
	}
	delete[] worker;
}
