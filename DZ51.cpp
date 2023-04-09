#include "Header.h"
#include <vector>

class OrderProcessingException : public std::exception
{
    const char* str;

public:
    OrderProcessingException(const char* str) : str(str) 
    {}

    const char* what() const noexcept override
    {
        return this->str;
    }
};

class CartItem
{
    std::string name;
    int price;
    int count;
    int maxCount;

public:
    CartItem(std::string name, int price, int count, int maxCount)
        : name(name), price(price), count(count), maxCount(maxCount)
    {
        if (this->price < 0)
        {
            throw std::invalid_argument("price < 0");
        }

        this->count = 0;
    }

    void addNew(int count)
    {
        this->count += count;

        if (this->count > this->maxCount)
        {
            throw std::runtime_error("count > maxCount");
        }
    }

    int getCount() const { return this->count; }
    int getPrice() const { return this->price; }
};

class Order
{
    std::vector<CartItem> items;
    int money;

public:
    Order(int money, std::vector<CartItem> items) : money(money), items(items) {};

    void process()
    {
        int sum = 0;

        for (int i = 0; i < items.size(); i++)
        {
            sum += items[i].getCount() * items[i].getPrice();
        }

        if (sum > this->money)
        {
            throw OrderProcessingException("sum > this->money");
        }

        this->money -= sum;

        this->items.clear();
        std::cout << "Order process success\n";
    }
};
