#include "Header.h"

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name(name), age(age)
    {}

    virtual std::string getName() 
    { 
        return this->name;
    }
    virtual int getAge() 
    {
        return this->age;
    }
};

class Employee : public Person
{
    int salary;

public:
    Employee(std::string name, int age, int salary) : Person(name, age), salary(salary) 
    {}

    int getSalary() 
    { 
        return this->salary;
    }
};

void Output(Person* obj)
{

    Employee* per = dynamic_cast<Employee*>(obj);

    if (per)
    {
        std::cout << "Employee salary: " << per->getSalary() << "\n";
    }

    std::cout << "Name: " << obj->getName() << "\n";
    std::cout << "Age: " << obj->getAge() << "\n";
}
