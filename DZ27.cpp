#include <iostream>
using namespace std;

int main()
{
    const char* path = "D:\\text1.txt";
    FILE* out;
    char sym;
    cout << "Enter symbol: ";
    cin >> sym;
    if (fopen_s(&out, path, "w") != NULL)
    {
        cout << "Error";
    }
    else
    {
        fprintf(out, "%s", "Words: ");
        int c;
        int words = 1;
        bool isStart = false;

        if (fopen_s(&out, path, "r") != NULL)
        {
            cout << "Error";
        }
        else
        {
            while (!feof(out))
            {
                c = fgetc(out);

                if (c == sym)
                {
                    isStart = true;
                }

                if (isStart && c == ' ')
                {
                    words++;
                }
            }
        }
        fprintf(out, "%d", words);
    }
}
