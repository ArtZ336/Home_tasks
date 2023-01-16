void Reservoir::Input()
{
    std::cout << "Введите ширину: ";
    std::cin >> width;
    std::cout << "Введите длину: ";
    std::cin >> length;
    std::cout << "Введите глубину: ";
    std::cin >> depth;
}

void Reservoir::Output()
{
    std::cout << "Name: " << name << "\n";
    std::cout << "Width: " << width << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Depth: " << depth << "\n";
}

void Reservoir::Volume()
{

    std::cout << "Volume: " << length * width * depth << "\n";
}

void Reservoir::Area()
{

    std::cout << "Area: " << length * width << "\n";
}

void Reservoir::Comp()
{
    if (length * width * depth < 10000)
    {
        std::cout << name << " - бассейн" << "\n";
    }
    else
    {
        std::cout << name << " - море" << "\n";
    }

}

Reservoir::Reservoir(const Reservoir& obj)
{
    name = obj.name;
    length = obj.length;
    width = obj.width;
    depth = obj.depth;
}

Reservoir::Reservoir()
{
    name = "";
    length = 0;
    width = 0;
    depth = 0;
}
