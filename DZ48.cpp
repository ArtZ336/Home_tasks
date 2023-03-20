void Ascii::display(const char* path)
{
    std::fstream file;
    file.open(path);

    std::string str;

    while (std::getline(file, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            std::cout << (int)str[i] << "\n";
        }
    }

    file.close();
}

void Base::display(const char* path)
{
    std::fstream file;
    file.open(path);

    std::string str;

    while (std::getline(file, str))
    {
        std::cout << str << "\n";
    }

    file.close();
}

void Binary::display(const char* path)
{
    std::fstream file;
    file.open(path);

    std::string str;

    while (std::getline(file, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            int code = (int)str[i];
            int product = 1;
            std::cout << code << " ";
            int result = 0;

            while (code != 0)
            {
                int remainder = code % 2;
                result += remainder * product;
                code /= 2;
                product *= 10;
            }

            std::cout << result << "\n";
        }
    }

    file.close();
}
