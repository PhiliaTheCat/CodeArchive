#include "../include/Merge_Sort"

template<typename Type> void Merge_Sort(Type arr[], int l, int r, bool (*To_Swap)(Type, Type))
{
    // Special
    if (r == l)
        return;
    
    // Division
    int m = (r + l) / 2;
    Merge_Sort(arr, l, m, To_Swap);
    Merge_Sort(arr, m + 1, r, To_Swap);

    // Merging
    Type cache[r - l + 1];
    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r)
    {
        if (To_Swap(arr[i], arr[j]))
        {
            cache[k] = arr[j];
            j += 1;
        }
        else 
        {
            cache[k] = arr[i];
            i += 1;
        }
        k += 1;
    }
    while (i <= m)
    {
        cache[k] = arr[i];
        i += 1;
        k += 1;
    }
    while (j <= r)
    {
        cache[k] = arr[j];
        j += 1;
        k += 1;
    }

    // Overwrite
    for (i = l, k = 0; i <= r; i += 1, k += 1)
        arr[i] = cache[k];
}
