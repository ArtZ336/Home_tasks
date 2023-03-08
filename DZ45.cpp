BitString::BitString(): String()
{

}

BitString::BitString(char* str) : String(str)
{
    if (!this->checkBit())
    {
        throw Exception("String isnt bit");
    }
}

BitString::BitString(const BitString& obj)
{
    if (!this->checkBit())
    {
        throw Exception("String isnt bit");
    }
}

BitString& BitString::operator=(const BitString& obj)
{
    if (!this->checkBit())
    {
        throw Exception("String isnt bit");
    }

    if (this->str != nullptr)
    {
        delete[] this->str;
    }

    this->length = this->len(obj.str);
    this->str = new char[this->length + 1];
    this->copy(this->str, obj.str, this->length);
    this->str[this->length] = '\0';
}

bool BitString::checkBit()
{
    for (int i = 0; i < this->length; i++)
    {
        if (this->str[i] == '1' || this->str[i] == '0')
        {
            continue;
        }

        else
        {
            return false;
        }
    }

    return true;
}

BitString BitString::operator+(const BitString& obj)
{
    BitString str((String(this->str) + obj.str).str);
    return str;
}

BitString& BitString::operator+=(const BitString& obj)
{
    *this = *this + obj;
    return *this;
}

bool BitString::operator==(const BitString& obj)
{
    return String(this->str) == String(obj.str);
}

bool BitString::operator!=(const BitString& obj)
{
    return !(String(this->str) == String(obj.str));
}
