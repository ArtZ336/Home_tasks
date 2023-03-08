Stack::Stack(int size)
{
    this->array = new int[size];
    this->size = size;
    this->topIndex = -1;
}

Stack::~Stack()
{
    if (this->array != nullptr)
    {
        delete[] this->array;
    }
}

void Stack::pop()
{
    if (this->isEmpty())
    {
        throw std::bad_alloc();
    }

    this->topIndex--;
}

void Stack::push(int num)
{
    if (this->isFull())
    {
        throw std::bad_alloc();
    }

    this->array[++this->topIndex] = num;
}

int Stack::top()
{
    if (this->isEmpty())
    {
        throw std::bad_alloc();
    }

    return this->array[this->topIndex];
}

bool Stack::isEmpty()
{
    if (this->topIndex < 0)
    {
        return true;
    }

    return false;
}

bool Stack::isFull()
{
    if (this->topIndex + 1 == this->size)
    {
        return true;
    }

    return false;
}

void Stack::copy(int* dest, int* res, int len)
{
    for (int i = 0; i <= len; i++)
    {
        dest[i] = res[i];
    }
}

void Stack::print()
{
    for (int i = this->topIndex; i >= 0; i--)
    {
        std::cout << this->array[i] << "\n";
    }

    std::cout << "\n";
}
