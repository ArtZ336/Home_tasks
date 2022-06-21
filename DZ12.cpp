#include <iostream>
using namespace std;

int main()
{
	//1
    int temp = 0, i = 1, j = 1;
    for (i = 1; i <= 10000000; i++) 
    {
        for (j = 1; j <= 10000000; j++)
        {
            if (j < i)
            {
                if (i % j == 0)
                    temp += j;
            }
        }
        if (temp == i) 
        {
            cout << i << "\n";
        }
        temp = 0;
    }
    //2
    int n1 = 0, n2 = 1;
    for (int i = (n1 + n2); i <= 10000000; i++)
    {
        cout << i << "\n";
        n1 = n2;
        n2 = i;
        i = n1 + n2;
    }
    //3
    int yar, height;
    cout << "Введите высоту и количество ярусов ёлки: ";
    cin >> height >> yar;
    for (int i = 1; i <= yar; i++)
    {
        int j = i;
        for (int k = 0; k < height; k++, j++)
        {
            for (int l = 0; l < (yar * height); l++)
            {
                if (l < (yar * height) / 2 + j && l > (yar * height) / 2 - j)
                {
                    cout << "<>";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
}
