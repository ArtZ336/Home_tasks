#include "Header.h"

class Fraction 
{

    int numerator, denominator;

public:
    Fraction(int numerator, int denominator) 
    {
        this->numerator = numerator;
        if (denominator != 0) 
        {
            this->denominator = denominator;
        }
    }
    void setNumerator(int numerator) 
    { 
        this->numerator = numerator; 
    }
    void setDenominator(int denominator)
    {
        if (denominator != 0)
        {
            this->denominator = denominator;
        }
    }
    void show()
    {
        std::cout << "Fraction: " << numerator << "/" << denominator << "\n";
    }

    void writeToFile(std::ofstream& file) 
    {
        file.write((char*)&numerator, sizeof(numerator));
        file.write((char*)&denominator, sizeof(denominator));
    }
};
