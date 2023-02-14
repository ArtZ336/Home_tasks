template <typename T>
Array<T>::Array()
    : size(5), grow(5), topIndex(-1)
{
    this->arr = new T[this->size];
}

template <typename T>
Array<T>::Array(int size, int grow)
    : size(size), grow(grow), topIndex(-1)
{
    this->arr = new T[this->size];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    this->topIndex = other.topIndex;
    this->grow = other.grow;
    this->size = other.size;

    if (this->arr != nullptr)
    {
        delete[] this->arr;
    }

    this->arr = new T[this->size];
    this->copy(this->arr, other.arr, this->topIndex + 1);

    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->arr;
}

template <typename T>
void Array<T>::copy(T* dest, T* res, int count)
{
    for (int i = 0; i < count; i++)
    {
        dest[i] = res[i];
    }
}

template <typename T>
void Array<T>::setSize(int _size, int grow)
{
    if (_size < 0)
    {
        return;
    }

    T* temp = new T[_size];

    if (this->size < _size)
    {
        this->copy(temp, this->arr, this->topIndex + 1);
    }

    else 
    {
        this->topIndex = _size - 1;
        this->copy(temp, this->arr, _size);
    }

    delete[] this->arr;
    this->arr = temp;
    temp = nullptr;

    this->grow = grow;


    this->size = _size;
}

template <typename T>
void Array<T>::freeBuffer()
{
    T* temp = new T[this->topIndex + 1];
    this->copy(temp, this->arr, this->topIndex + 1);

    delete[] this->arr;
    this->arr = temp;
    temp = nullptr;

    this->size = this->topIndex + 1;
}

template <typename T>
T& Array<T>::getAt(int index)
{
    if (index >= 0 && index <= this->topIndex)
    {
        return this->arr[index];
    }
}

template <typename T>
void Array<T>::setAt(int index, T object)
{
    if (index >= 0 && index <= this->topIndex)
    {
        this->arr[index] = object;
    }
}

template <typename T>
void Array<T>::add(T object)
{
    if (this->checkBuff())
    {
        this->setSize(this->size + this->grow, this->grow);
    }

    this->topIndex++;
    this->arr[this->topIndex] = object;
}

template <typename T>
void Array<T>::insert(int index, T object)
{
    if (index < 0 || index > this->topIndex)
    {
        return;
    }

    if (this->checkBuff())
    {
        this->setSize(this->size + this->grow, this->grow);
    }

    this->topIndex++;

    T* temp = new T[this->size];
    this->copy(temp, this->arr, this->topIndex);

    for (int i = 0; i < index; i++)
    {
        temp[i] = this->arr[i];
    }

    for (int i = index + 1; i <= this->topIndex; i++)
    {
        temp[i] = this->arr[i - 1];
    }

    temp[index] = object;
    this->arr = temp;
    temp = nullptr;
}

template <typename T>
void Array<T>::append(Array<T>& arrayUnion)
{
    T* temp = new T[this->size + arrayUnion.size];

    this->copy(temp, this->arr, this->topIndex + 1);

    int j = 0;

    for (int i = this->topIndex + 1; j <= arrayUnion.topIndex; i++)
    {
        temp[i] = arrayUnion[j];
        j++;
        // std::cout << j << " ";
    }

    this->arr = temp;
    temp = nullptr;

    this->size += arrayUnion.size;
    this->topIndex += arrayUnion.topIndex + 1;
}

template <typename T>
void Array<T>::removeAt(int index)
{
    if (index < 0 || index > this->topIndex)
    {
        return;
    }

    if (this->topIndex > -1 && this->size - this->topIndex > this->grow)
    {
        this->setSize(this->size - this->grow, this->grow);
    }

    T* temp = new T[this->size];
    this->copy(temp, this->arr, this->topIndex - 1);

    for (int i = 0; i < index; i++)
    {
        temp[i] = this->arr[i];
    }

    for (int i = index + 1; i <= this->topIndex; i++)
    {
        temp[i - 1] = this->arr[i];
    }

    this->topIndex--;
    this->arr = temp;
    temp = nullptr;
}

template <typename T>
void Array<T>::removeAll()
{
    delete[] this->arr;
    this->arr = new T[this->grow];

    this->size = this->grow;
    this->topIndex = -1;
}
