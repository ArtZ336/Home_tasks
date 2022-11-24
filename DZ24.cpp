#include <iostream>

using namespace std;

int main()
{
    int num;
    int base = 1;
    int res = 0;
    int choice;
    cout << "1-Из десятичной в бинарную\n2-Из бинарной в десятичную\nВыбор: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Введите число: ";
        cin >> num;
        while (num)
        {
            res += (num % 2) * base;
            num = num / 2;
            base = base * 10;
        }
        cout << res;

        break;

    case 2:
        cout << "Введите число: ";
        cin >> num;
        int temp = num;
        while (temp)
        {
            int end = temp % 10;
            temp = temp / 10;
            res += end * base;
            base = base * 2;
        }
        cout << res;
        break;
    }
}
