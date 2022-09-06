#include "../include/Bubble_Sort"

void Bubble_Sort(int arr[], int l, int r, bool (*To_Swap)(int, int))
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
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
