#include "../include/Bubble_Sort"
#include "../include/Complex"

template<class TpSort> void Bubble_Sort(TpSort arr[], int l, int r, bool (*To_Swap)(TpSort, TpSort))
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
                TpSort temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
