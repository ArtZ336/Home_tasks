#include <iostream>
using namespace std;

int CountS(const char* path)
{
    FILE* TEXT;

    int c;
    int symb = 0;

    if (fopen_s(&TEXT, path, "r") != NULL)
    {
        cout << "Error";
    }
    else
    {
        while (!feof(TEXT))
        {
            c = fgetc(TEXT);
            if (c != ' ' && c != '\n')
            {
                symb++;
            }
        }
    }
    return symb;
}

int CountStr(const char* path)
{
    FILE* TEXT;

    int c;
    int str = 0;

    if (fopen_s(&TEXT, path, "r") != NULL)
    {
        cout << "Error";
    }
    else
    {
        while (!feof(TEXT))
        {
            c = fgetc(TEXT);
            if (c == '\n')
            {
                str++;
            }
        }
    }
    return str;
}


int CountV(const char* path)
{
    FILE* TEXT;

    int c;
    int vow = 0;

    char letters[] = { "aeiouy" };

    if (fopen_s(&TEXT, path, "r") != NULL)
    {
        cout << "Error";
    }
    else
    {
        while (!feof(TEXT))
        {
            c = fgetc(TEXT);

            for (int i = 0; i < strlen(letters); i++)
            {
                if (c == letters[i])
                {
                    vow++;
                }
            }

        }
    }
    return vow;
}


int CountC(const char* path)
{
    FILE* TEXT;

    int c;
    int cons = 0;

    char letters[] = { "bcdfghjklmnpqrstvwxyz" };

    if (fopen_s(&TEXT, path, "r") != NULL)
    {
        cout << "Error";
    }
    else
    {
        while (!feof(TEXT))
        {
            c = fgetc(TEXT);

            for (int i = 0; i < strlen(letters); i++)
            {
                if (c == letters[i])
                {
                    cons++;
                }
            }

        }
    }
    return cons;
}


int CountN(const char* path)
{
    FILE* TEXT;

    int c;
    int numb = 0;

    char num[] = { "0123456789" };

    if (fopen_s(&TEXT, path, "r") != NULL)
    {
        cout << "Error";
    }
    else
    {
        while (!feof(TEXT))
        {
            c = fgetc(TEXT);

            for (int i = 0; i < strlen(num); i++)
            {
                if (c == num[i])
                {
                    numb++;
                }
            }

        }
    }
    return numb;
}

int main()
{
    const char* path1 = "D:\\tex1.txt";
    const char* path2 = "D:\\text2.txt";
    FILE* out;
    if (fopen_s(&out, path1, "w") != NULL)
    {
        cout << "Error";
    }
    else
    {
        fprintf(out, "%s", "Symbols: ");
        fprintf(out, "%d", CountS(path2));
        fprintf(out, "%s", "\nAmount of strings: ");
        fprintf(out, "%d", CountStr(path2));
        fprintf(out, "%s", "\nVowels: ");
        fprintf(out, "%d", CountV(path2));
        fprintf(out, "%s", "\nСonsonants: ");
        fprintf(out, "%d", CountC(path2));
        fprintf(out, "%s", "\nNumbers: ");
        fprintf(out, "%d", CountN(path2));
    }

}
