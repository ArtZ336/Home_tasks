class Card
{
private:
    int money;

public:
    Card(int money) : money(money) 
    {};

    void addMoney(int money)
    {
        this->money += money;
    }

    void withdrawMoney(int money)
    {
        if (this->money < money)
        {
            throw std::logic_error("Not enough money to withdraw");
        }
        this->money -= money;
    }
};
