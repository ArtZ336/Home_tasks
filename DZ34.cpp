class MyString 
{
    char* str;
    int length;
    static int stringCount;
public:
    MyString() {
        length = 80;
        str = new char[length + 1];
        str[length] = '\0';
        stringCount++;
    }
    MyString(int _length) {
        length = _length;
        str = new char[length + 1];
        str[length] = '\0';
        stringCount++;
    }
    MyString(char* _str) 
    {
        length = 0;
        for (int phase = 0; phase < 2; phase++) 
        {
            for (int i = 0; _str[i] != '\0'; i++) 
            {
                if (phase == 0)
                {
                    length++;
                }
                else
                {
                    str[i] = _str[i];
                }
            }
            if (phase == 0) 
            {
                str = new char[length + 1];
            }
        }
        str[length] = '\0';
        stringCount++;
    }
    MyString(const char _str[]) 
    {
        length = 0;
        for (int phase = 0; phase < 2; phase++) 
        {
            for (int i = 0; _str[i] != '\0'; i++)
            {
                if (phase == 0) 
                {
                    length++;
                }
                else 
                {
                    str[i] = _str[i];
                }
            }
            if (phase == 0)
            {
                str = new char[length + 1];
            }
        }
        str[length] = '\0';
        stringCount++;
    }
    MyString(MyString& obj) 
    {
        this->length = obj.length;
        this->str = new char[length + 1];
        for (int i = 0; obj.str[i] != '\0'; i++) 
        {
            this->str[i] = obj.str[i];
        }
        this->str[length] = '\0';
    }
    void MyStrcpy(MyString& obj)
    {
        this->length = obj.length;
        delete[] this->str;
        this->str = new char[length + 1];
        for (int i = 0; obj.str[i] != '\0'; i++)
        {
            this->str[i] = obj.str[i];
        }
        this->str[length] = '\0';
    }
    bool searchString(const char* searchList)
    {
        bool find = false;
        for (int i = 0; str[i] != '\0'; i++)
        {
            for (int j = 0; searchList[j] != '\0'; j++) 
            {
                if (str[i + j] != '\0' && str[i + j] == searchList[j])
                {
                    find = true;
                }
                else
                {
                    find = false;
                    break;
                }
            }
            if (find) 
            {
                return find;
            }
        }
        return find;
    }
    int MyChr(char c)
    {
        for (int i = 0; str[i] != '\0'; i++) 
        {
            if (str[i] == c)
            {
                return i;
            }
        }
        return -1;
    }
    int GetLength() 
    {
        return length;
    }
    void MyStrCat(MyString& b)
    {
        char* temp = new char[this->length + b.length + 1];
        for (int i = 0; i < this->length; i++) 
        {
            temp[i] = this->str[i];
        }
        for (int i = 0; i < b.length; i++)
        {
            temp[this->length + i] = b.str[i];
        }
        this->length += b.length;
        delete[] this->str;
        this->str = temp;
        this->str[length] = '\0';
    }

    void MyDelChr(char c) 
    {
        char* temp = new char[length];
        int indx = c;
        for (int i = 0; i < length; i++)
        {
            if (i < indx) 
            {
                temp[i] = this->str[i];
            }
            else if (i == indx) 
            {
                continue;
            }
            else
            {
                temp[i - 1] = this->str[i];
            }
        }
        this->length--;
        delete[] this->str;
        this->str = temp;
        this->str[this->length] = '\0';
    }
    int MyStrCmp(MyString& b) 
    {
        if (this->length == b.length)
        {
            return 0;
        }
        else if (this->length > b.length)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    void Input()
    {
        gets_s(str, length);
    }
    void Output()
    {
        std::cout << str << '\n';
    }
    void static showCount()
    {
        std::cout << stringCount << '\n';
    }
    ~MyString() 
    {
         delete[] str;
    }
};

int MyString::stringCount = 0;
