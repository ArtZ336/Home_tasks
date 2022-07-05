#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	const int amount = 5;
	const int size = 5;
	int ar[amount][size] = {};
	srand(time(0));
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < size; j++)
		{
			ar[i][j] = rand() % 1000;
			cout << ar[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
    for (int y = 0; y <= (size * amount); y++)
    {
        for (int i = 0; i < amount; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (ar[i][j] > ar[i][j + 1]) 
                {
                    swap(ar[i][j], ar[i][j + 1]);
                }
            }
        }
    }

    for (int i = 0; i < amount; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << "\n";;
    }
}

