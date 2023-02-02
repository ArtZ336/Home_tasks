class Date
{
    int day;
    int month;
    int year;
public:
    Date()
    {
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
    Date(int day, int month, int year)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    int getDay() 
    { 
        return this->day; 
    };
    int getMonth()
    {
        return this->month;
    };
    int getYear()
    {
        return this->year;
    }
    void addDay() 
    { 
        this->day++;
    };
    void setDay(int day)
    { 
        this->day = day;
    };
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    Date operator++(int)
    { 
        this->day++;
        return *this;
    };
    Date operator--(int) 
    { 
        this->day--;
        return *this;
    };
    Date operator+=(Date& obj)
    {
        this->day += obj.day; 
        return *this; 
    };
    Date operator-=(Date& obj)
    {
        this->day -= obj.day; return *this; 
    };

    bool operator!=(Date& obj)
    {
        return (this->day != obj.day); 
    };
    bool operator==(Date& obj) 
    { 
        return (this->day == obj.day); 
    };
    bool operator>(Date& obj) 
    { 
        return (this->day > obj.day); 
    };
    bool operator<(Date& obj) 
    {
        return (this->day < obj.day); 
    };

    friend std::ostream& operator<<(std::ostream& stream, Date& obj);
    friend std::istream& operator>>(std::istream& stream, Date& obj);

    Date operator=(Date& obj);
};
std::ostream& operator<<(std::ostream& out, Date& obj)
{
    out << obj.day;
    return out;
}
std::istream& operator>>(std::istream& in, Date& obj)
{
    int day;
    std::cout << "Enter day: ";
    in >> day;
    obj.setDay(day);
    return in;
}
Date Date::operator=(Date& obj)
{
    day = obj.day;
    month = obj.month;
    year = obj.year;
    return *this;
}
