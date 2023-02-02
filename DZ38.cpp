template <typename T>
T Max(int size, T ar)
{
    int max_ar = ar[0];
    for (int i = 0; i < size; i++) 
    {
        if (ar[i] > max_ar)
        {
            max_ar = ar[i];
        }
    }
    return max_ar;
}
template <typename T>
T Min(int size, T ar)
{
    int min_ar = ar[0];
    for (int i = 0; i < size; i++)
    {
        if (ar[i] > min_ar)
        {
            min_ar = ar[i];
        }
    }
    return min_ar;
}
template <typename T>
T Sort(int size, T ar)
{
    int temp;
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (ar[j] > ar[j + 1]) 
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}
