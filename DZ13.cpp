#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

int main()
{
	//1
	int ar[5] = {};
    cout << "Введите массив: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    reverse(ar, ar + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i];
    }
    //2
	const int size = 20;
	int ar[size] = {};
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand();
	}
	for (int i = 0; i < size; i++)
	{
		if (ar[i] % 2 == 0)
			cout << ar[i] << " ";
	}
	//3
	const int size = 10;
	int ar[size] = {};
	int count = 0, summa = 0, aver = 0;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		int index = (-20) + (rand() % (20 - (-20) + 1));
		ar[i] = index;
		cout << ar[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		if (ar[i] > 0)
		{
			count++;
			summa += ar[i];
			aver += ar[i];
		}
	}
	cout << "\nКоличество: " << count << "\nСумма: " << summa << "\nСреднее: " << aver / count;
	//5
	const int size = 100;
	int ar[size] = {};
	int num, count = 0;
	srand(time(0));
	cout << "Введите число: ";
	cin >> num;
	for (int i = 0; i < size; i++)
	{
		int index = (0) + (rand() % (100 - (0) + 1));
		ar[i] = index;
		cout << ar[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		if (ar[i] == num)
		{
			count++;
		}
	}
	if (count > 0)
	{
		cout << "\nЧисло встречаеться: " << count;
	}
	else
	{
		cout << "\nЧисло не встречаеться";
	}
	//6
	const int size = 20;
	int ar[size] = {};
	int summa = 0;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		int index = (-10) + (rand() % (30 - (-10) + 1));
		ar[i] = index;
		cout << ar[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		if (ar[i] < 0)
		{
			 for (int j = i + 1; j < size; j++)
	            {
	                summa += ar[j];
	            }
	           break;
	       }
	}
	cout << "\nСумма: " << summa;
	//7
	const int size = 20;
	int ar[size] = {};
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand();
		cout << ar[i] << " ";
	}
	int min = *min_element(ar, ar + size);
	int max = *max_element(ar, ar + size);
	cout << "\nМинимальное значение: " << min;
	cout << "\nМаксимальное значение: " << max;
	//8
	const int size = 200;
	int ar[size] = {};
	int summa = 0;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		int index = (0) + (rand() % (200 - (0) + 1));
		ar[i] = index;
		cout << ar[i] << " ";
	}
	int count1 = 0, count2 = 0, count3 = 0;
	for (int i = 0; i < size; i++)
	{
		if (ar[i] < 10)
		{
			count1++;
		}
		else if (ar[i] > 9 && ar[i] < 100)
		{
			count2++;
		}
		else if (ar[i] > 99)
		{
			count3++;
		}
	}
	cout << "\nОдноразрядных: " << count1 << "\nДвухразрядный: " << count2 << "\nТрёхразрядный: " << count3;
	//9
	const int size = 10;
	int ar[size] = {};
	int summa = 0;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand();
		cout << ar[i] << " ";
	}
	for (int i = 0; i < size / 2; i++)
	{
		ar[i] += ar[size - i - 1];
		ar[size - i - 1] = ar[i] - ar[size - i - 1];
		ar[i] = ar[i] - ar[size - i - 1];
	}
	cout << "\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
	//10
	const int a = 5;
	const int b = 5;
	const int c = 10;
	int A[a] = {};
	int B[b] = {};
	int C[c] = {};

	for (int i = 0; i < a; i++)
	{
		A[i] = rand();
		cout << A[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < b; i++)
	{
		B[i] = rand();
		cout << B[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < c; i++)
	{
		C[i] = rand();
		cout << C[i] << " ";
	}
	int index_a = 0;
	int index_b = 0;
	for (int i = 0; i < c; i++)
	{

		if (index_a < a)
		{
			C[i] = A[index_a];
			index_a++;
			i++;
		}

		if (index_b < b)
		{
			C[i] = B[index_b];
			index_b++;
			i++;
		}
	}
	cout << "\n";
	for (int i = 0; i < c; i++)
	{
		cout << C[i] << " ";
	}

}
