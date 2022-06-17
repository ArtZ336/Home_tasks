#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    //1
    int height;
    cout << "Введите высоту: ";
    cin >> height;
    for (int i = 1; i <= height / 2 + 1; ++i) {
        for (int k = 1; k <= height / 2 + 1 - i; ++k)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; ++k)
        {
            cout << "*";
        }
        cout << '\n';
    }
    //2
    int num, n , p;
    cout << "Введите число: ";
    cin >> num;
    while (num != 0)
    {
        n = num % 10;
        p = (p * 10) + n;
        num /= 10;
    }
    if (num == p)
    {
        cout << "Число палиндром";
    }
    else
    {
        cout << "Число не палиндром";
    }
    //4
    for (int i = 2; i <= 10000000; i++)
    {
        for (int k = 2; k <= 10000000; k++)
        {
            if (i % k != 0)
            {
                cout << i << "\n";
            }
            break;
        }
    }
    //5
    int num1 = 0;
    int num2 = 10000000;
    int i, num, dig, sum, count;
    for (i = num1; i <= num2; i++)
    {
        count = 0;
        num = i;
        while (num > 0)
        {
            ++count;
            num /= 10;
        }
        sum = 0;
        num = i;
        while (num > 0)
        {
            dig = num % 10;
            sum = sum + pow(dig, count);
            num /= 10;
        }

        if (sum == i)
        {
            cout << i << "\n";
        }
    }
}
