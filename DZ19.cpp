#include <iostream>
#include <string>
using namespace std;

//1
//typedef struct Complex
//{
//    double Re;
//    double Im;
//} z;
//
//z summation(z z1, z z2) 
//{
//    z summ;
//    summ.Re = z1.Re + z2.Re;
//    summ.Im = z1.Im + z2.Im;
//    return summ;
//}
//
//z subtract(z z1, z z2) 
//{
//    z subt;
//    subt.Re = z1.Re - z2.Re;
//    subt.Im = z1.Im - z2.Im;
//    return subt;
//}
//
//z multiply(z z1, z z2)
//{
//    z mult;
//    mult.Re = (z1.Re * z2.Re) - (z1.Im * z2.Im);
//    mult.Im = (z1.Im * z2.Re) + (z2.Im * z1.Re);
//    return mult;
//}
//
//z divide(z z1, z z2) 
//{
//    z divi;
//    divi.Re = (z1.Re * z2.Re + z1.Im * z2.Im) / (pow(z2.Re, 2) + pow(z2.Im, 2));
//    divi.Im = (z1.Im * z2.Re - z2.Im * z1.Re) / (pow(z2.Re, 2) + pow(z2.Im, 2));
//    return divi;
//}
//
//int main() 
//{
//    z com1, com2;
//    cout << "Введите a и b для первого комплексного числа" << endl;
//    cin >> com1.Re;
//    cin >> com1.Im;
//    cout << "Первое комплексное число: " << com1.Re << " + (" << com1.Im << ")i" << endl;
//    cout << "Введите a и b для второго комплексного числа" << endl;
//    cin >> com2.Re;
//    cin >> com2.Im;
//    cout << "Второе комплексное число: " << com2.Re << " + (" << com2.Im << ")i" << endl;
//    z summ = summation(com1, com2);
//    z subt = subtract(com1, com2);
//    z mult = multiply(com1, com2);
//    z divi = divide(com1, com2);
//    cout << "Сумма этих чисел = " << summ.Re << " + (" << summ.Im << ")i" << endl;
//    cout << "Разность этих чисел = " << subt.Re << " + (" << subt.Im << ")i" << endl;
//    cout << "Произведение этих чисел = " << mult.Re << " + (" << mult.Im << ")i" << endl;
//    cout << "Частное этих чисел (первое/второе) = " << divi.Re << " + (" << divi.Im << ")i" << endl;
//}
//2


struct Car
{
    float length;
    int clearance;
    float height; 
    int v; 
    int power; 
    float diameter; 
    string color; 
    string type; 
};

void Input(Car& car)
{
    cout << "Длина: ";
    cin >> car.length;
    cout << "Клиренс: ";
    cin >> car.clearance;
    cout << "Высота посадки: ";
    cin >> car.height;
    cout << "Объем двигателя: ";
    cin >> car.v;
    cout << "Мощность двигателя: " ;
    cin >> car.power;
    cout << "Диаметр колес: ";
    cin >> car.diameter;
    cout << "Цвет: ";
    cin >> car.color;
    cout << "Тип коробки передач: ";
    cin >> car.type;
}

void Output(Car car)
{
    cout << "\n";
    cout << "Длина: " << car.length << "\n";
    cout << "Клиренс: " << car.clearance << "\n";
    cout << "Высота посадки: " << car.height << "\n";
    cout << "Объем двигателя: " << car.v << "\n";
    cout << "Мощность двигателя: " << car.power << "\n";
    cout << "Диаметр колес: " << car.diameter << "\n";
    cout << "Цвет: " << car.color << "\n";
    cout << "Тип коробки передач: " << car.type << "\n";
}

int main()
{
    Car car;
    Input(car);
    Output(car);
}
