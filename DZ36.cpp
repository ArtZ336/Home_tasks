    char operator[](int index)
    {
        if (str != nullptr && index >= 0 && index < length)
        {
            return str[index];
        }
    }
    int operator()(char symbol) 
    {
        for (int i = 0; i < length; i++) 
        {
            if (str[i] == symbol) 
            {
                return i;
            }
        }
        return -1;
    }
    operator int() const
    {
        return strlen(str);
    }
