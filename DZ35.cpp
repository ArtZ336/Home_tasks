void Overcoat::ShowCloth()
{
    std::cout << cost << "\n";
    std::cout << name << "\n";
}

Overcoat::Overcoat()
{
    name = new char[20];
}
Overcoat::Overcoat(int c, char* name)
{
    this->name = new char[strlen(name + 1)];
    cost = c;
}
Overcoat::~Overcoat()
{
    delete[]name;
}
bool Overcoat::operator==(Overcoat& o)
{
    if (cost == o.cost) return true;
    return false;
}
bool Overcoat::operator<(Overcoat& s)
{
    if (cost < s.cost)
        return true;
    return false;
}
bool Overcoat::operator>(Overcoat& s)
{
    if (cost > s.cost)
        return true;
    return false;
}
Overcoat Overcoat::operator=(Overcoat& s)
{
    name = new char[strlen(s.name) + 1];
    strcpy_s(name, strlen(s.name), s.name);
    cost = s.cost;
    return Overcoat(cost, name);
}
