#include <stdio.h>

#include "../include/Merge_Sort.h"

void Merge_Sort(int arr[], int l, int r, int (*judge)(int, int))
{
    //Special Condition
    if (l == r)
        return;
    
    //Divide
    int m = (l + r) / 2;
    Merge_Sort(arr, l, m, judge);
    Merge_Sort(arr, m + 1, r, judge);

    //Merge
    int cache[r - l + 1];
    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r)
    {
        if (judge(arr[i], arr[j]))
        {
            cache[k] = arr[j];
            j += 1;
            k += 1;
        }
        else 
        {
            cache[k] = arr[i];
            i += 1;
            k += 1;
        }
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
    i = l, k = 0;
    while (k <= r - l)
    {
        arr[i] = cache[k];
        i += 1;
        k += 1;
    }
    return;
}
