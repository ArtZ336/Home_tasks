class Min
{
public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

class Max
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

class SortH
{
public:
    bool operator()(int num1, int num2)
    {
        return num1 < num2;
    }
};

class SortL
{
public:
    bool operator()(int num1, int num2)
    {
        return num1 > num2;
    }
};

class Add
{

    const int numAdd;

public:
    Add(const int numAdd) : numAdd(numAdd) 
    {}

    void operator()(int& num)
    {
        num += this->numAdd;
    }
};

class Subtract
{
    const int numSub;

public:
    Subtract(const int numSub) : numSub(numSub) 
    {}

    void operator()(int& num)
    {
        num -= this->numSub;
    }
};

class Delete
{
private:
    const int deleteNum;

public:
    Delete(const int deleteNum) : deleteNum(deleteNum) 
    {}

    bool operator()(int& num)
    {
        return num == this->deleteNum;
    }
};
