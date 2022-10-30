#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int countW = 1;
    char vowels[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int countV = 0;
    char consonants[42] = { 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f', 'G', 'g', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'P', 'p','Q', 'q', 'S', 's', 'T', 't', 'V', 'v', 'X', 'x', 'Z', 'z', 'H', 'h', 'R', 'r', 'W', 'w', 'Y', 'y' };
    int countC = 0;
    char punctuation[11] = {'`', '(', ')', ':', ',', '!', '.', '-', '?', ';', '\"'};
    int countP = 0;
    char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int countN = 0;
    char symbols[16] = {'@', '_', '*', '#', '$', '%', '^', '&', '=', '/', '\\', '|', '~', '<', '>', '+'};
    int countS = 0;
    char* text = new char[200];
    cout << "Введите текст: ";
    gets_s(text, 200);
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
            countW++;
        for (int k = 0; k < 10; k++)
        {
            if (text[i] == vowels[k])
                countV++;
        }
        for (int k = 0; k < 42; k++)
        {
            if (text[i] == consonants[k])
                countC++;
        }
        for (int k = 0; k < 11; k++)
        {
            if (text[i] == punctuation[k])
                countP++;
        }
        for (int k = 0; k < 10; k++)
        {
            if (text[i] == numbers[k])
                countN++;
        }
        for (int k = 0; k < 16; k++)
        {
            if (text[i] == symbols[k])
                countS++;
        }

    }
    cout << "Слов - " << countW << "\nГласных - " << countV << "\nСогласных - " << countC << "\nЗнаки пунктуации - " << countP << "\nЦифр - " << countN << "\nСимволов - " << countS;
    delete[] text;
}
