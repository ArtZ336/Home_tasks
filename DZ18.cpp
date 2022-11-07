#include <iostream>

using namespace std;

//1
//int main()
//{
//    1
//    cout << "Введите 5 фамилий студентов: ";
//    string* s = new string[256];
//
//    for (int i = 0; i < 5; i++) 
//    {
//        cin >> s[i];
//    }
//    cout << "Список студентов\n";
//    for (int i = 0; i < 5; i++) 
//    { 
//        for (int j = i + 1; j < 5; j++) 
//        { 
//
//            if (s[i] > s[j]) 
//            {
//                string ct = s[i]; 
//                s[i] = s[j];
//                s[j] = ct;
//            }
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        cout << s[i] << "\n";
//    }
//}
//2
const int SIZE = 30;

void common(int** arrayA, int** arrayC, int colsA, int rowsA, int colsC, int rowsC)
{
    int* array_common_elements = new int[(rowsA * colsA) + (rowsC * colsC)];
    int count = 0;

    for (int i = 0; i < rowsA; i++) 
    {
        for (int j = 0; j < colsA; j++)
        {
            for (int k = 0; k < rowsC; k++) 
            {
                for (int l = 0; l < colsC; l++) 
                {
                    if (arrayA[i][j] == arrayC[k][l]) 
                    {
                        array_common_elements[count++] = arrayA[i][j];
                    }
                }
            }
        }

    }


    for (int i = 0; i < count; i++) 
    { 
        for (int j = i + 1; j < count; j++)
        {
            if (array_common_elements[i] == array_common_elements[j])
            {
                for (int k = j; k < count - 1; k++) 
                {
                    array_common_elements[k] = array_common_elements[k + 1];
                }
                count -= 1;
                if (array_common_elements[i] == array_common_elements[j]) 
                {
                    j--;
                }
            }
        }

    }

    if (array_common_elements[count] != 0) 
    {
        for (int i = 0; i < count; i++) 
        {
            cout << array_common_elements[i] << " ";
        }
    }
    else cout << "Общих значений нет";

    delete[]array_common_elements;
}

void unique(int** _array_A, int** _array_B, int** _array_C, int _cols_A, int _rows_A, int _cols_B, int _rows_B, int _cols_C, int _rows_C) 
{

    int* unique_elements = new int[(_rows_A * _cols_A) + (_rows_B * _cols_B) + (_rows_C * _cols_C)]; 
    int count = 0;

    for (int i = 0; i < _rows_A; i++) 
    {
        for (int j = 0; j < _cols_A; j++) 
        {
            for (int k = 0; k < _rows_B; k++) 
            {
                for (int l = 0; l < _cols_B; l++) 
                {
                    if (_array_A[i][j] != _array_B[k][l]) 
                    {
                        unique_elements[count++] = _array_A[i][j];
                    }
                }
            }
        }
    }

    for (int i = 0; i < _rows_B; i++) 
    {
        for (int j = 0; j < _cols_B; j++) 
        {
            for (int k = 0; k < _rows_C; k++) 
            {
                for (int l = 0; l < _cols_C; l++)
                {
                    if (_array_B[i][j] != _array_C[k][l]) 
                    {
                        unique_elements[count++] = _array_B[i][j];
                    }
                }
            }
        }
    }

    for (int i = 0; i < _rows_A; i++) 
    {
        for (int j = 0; j < _cols_A; j++) 
        {
            for (int k = 0; k < _rows_C; k++) 
            {
                for (int l = 0; l < _cols_C; l++) 
                {
                    if (_array_A[i][j] != _array_C[k][l]) 
                    {
                        unique_elements[count++] = _array_C[i][j];
                    }
                }
            }
        }
    }

    for (int i = 0; i < count; i++)
    { 
        for (int j = i + 1; j < count; j++)
        {
            if (unique_elements[i] == unique_elements[j])
            {
                for (int k = j; k < count - 1; k++) 
                {
                    unique_elements[k] = unique_elements[k + 1];
                }
                count -= 1;
                if (unique_elements[i] == unique_elements[j])
                {
                    j--;
                }
            }
        }
    }


    for (int i = 0; i < count; i++) 
    {
        cout << unique_elements[i] << " ";
    }

    delete[]unique_elements;
}

int** createArray(int _rows, int _cols) 
{
    int** array = new int* [_rows];
    for (int i = 0; i < _rows; i++) 
    {
        array[i] = new int[_cols];
    }

    for (int i = 0; i < _rows; i++) 
    {
        for (int j = 0; j < _cols; j++) 
        {
            array[i][j] = rand() % SIZE - 10;
        }
    }
    return array;
}
void printArray(int** _array, int _rows, int _cols) 
{
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++) 
        {
            cout << _array[i][j] << " ";
        }
        cout << endl;
    }
}
void deleteArray(int rows, int *ar[])
{
    for (int i = 0; i < rows; i++)
    {
        delete[] ar[i];
    }
    delete[] ar;
}
int main() {
    srand(time(NULL));

    int rows_A = 0;
    int cols_A = 0;

    int rows_B = 0;
    int cols_B = 0;

    int rows_C = 0;
    int cols_C = 0;

    int** array_A = new int* [rows_A];
    int** array_B = new int* [rows_B];
    int** array_C = new int* [rows_C];

    cout << "Введите колличество строк для массива А: ";
    cin >> rows_A;
    cout << "Введите колличество столбцов для массива А: ";
    cin >> cols_A;

    array_A = createArray(rows_A, cols_A);
    cout << "Массив А: " << "\n";
    printArray(array_A, rows_A, cols_A);
    cout << "Введите колличество строк для массива B: ";
    cin >> rows_B;
    cout << "Введите колличество столбцов для массива B: ";
    cin >> cols_B;

    array_B = createArray(rows_B, cols_B);
    cout << "Массив B: " << "\n";
    printArray(array_B, rows_B, cols_B);

    cout << "Введите колличество строк для массива C: ";
    cin >> rows_C;
    cout << "Введите колличество столбцов для массива C: ";
    cin >> cols_C;

    array_C = createArray(rows_C, cols_C);
    cout << "Массив C: " << "\n";
    printArray(array_C, rows_C, cols_C);

    cout << "Массив общих элементов А,B,С: ";
    common(array_A, array_C, cols_A, rows_A, cols_C, rows_C);

    cout << "\n";
    cout << "Массив уникальных элементов А,В,С: ";
    unique(array_A, array_B, array_C, cols_A, rows_A, cols_B, rows_B, cols_C, rows_C);

    deleteArray(rows_A, array_A);
    deleteArray(rows_B, array_B);
    deleteArray(rows_C, array_C);
}

