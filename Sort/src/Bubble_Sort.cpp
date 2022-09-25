#include "../include/Bubble_Sort"

template void Bubble_Sort<int>(int arr[], int l, int r, bool (*To_Swap)(int, int));

template<typename Type> void Bubble_Sort(Type arr[], int l, int r, bool (*To_Swap)(Type, Type))
{
    bool flag = true;
    for (int j = r; j >= l + 1 && flag; j -= 1)
    {
        flag = false;
        for (int i = 0; i <= j - 1; i += 1)
        {
            if (To_Swap(arr[i], arr[i + 1]))
            {
                flag = true;
                Type temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
