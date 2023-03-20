class Swordsman : public Unit
{
public:
    Swordsman(int strength, int agility, int intelligence) : Unit(strength, agility, intelligence)
    {

    }
    void StrengthAttack()
    { 
        std::cout << "Damage:" << this->strength + 10<< ")\n";
    }
    void AttackSpeed()
    {
        std::cout << "Hits:" << this->agility << ")\n";
    }
    void IntelligenceMana()
    {
        std::cout << "Mana:" << this->intelligence << ")\n";
    }
};

class Archer : public Unit
{
protected:
    int dodgeChance;
public:
    Archer(int strength, int agility, int intelligence, int dodgeChance) : Unit(strength, agility, intelligence)
    {

    }
    void StrengthAttack()
    {
        std::cout << "Damage:" << this->strength << ")\n";
    }
    void AttackSpeed()
    {
        std::cout << "Hits:" << this->agility + 10 << ")\n";
    }
    void IntelligenceMana()
    {
        std::cout << "Mana:" << this->intelligence << ")\n";
    }
    void Dodge()
    {
        std::cout << "Miss: " << this->agility * this->dodgeChance << "\n";
    }
};

class Mage : public Unit
{
protected:
    int manaRegen;
public:
    Mage(int strength, int agility, int intelligence, int manaRegen) : Unit(strength, agility, intelligence)
    {

    }
    void StrengthAttack()
    {
        std::cout << "Damage:" << this->strength << ")\n";
    }
    void AttackSpeed()
    {
        std::cout << "Hits:" << this->agility << ")\n";
    }
    void IntelligenceMana()
    {
        std::cout << "Mana:" << this->intelligence + 10 << ")\n";
    }
    void ManaRegeneration()
    {
        std::cout << "Mana:" << this->intelligence * this->manaRegen << ")\n";
    }
};
class BuffUnit : public Mage, public Archer, public Swordsman
{
public:
    BuffUnit(int strength, int agility, int intelligence, int manaRegen, int dodgeChance) : Swordsman(strength, agility, intelligence), Archer(strength, agility, intelligence, dodgeChance),
        Mage(strength, agility, intelligence, manaRegen)
    {

    }
};
