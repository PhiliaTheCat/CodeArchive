#include <stdio.h>

#include "../include/Bubble_Sort.h"

int Inc_Judge(int, int);

int main()
{
    int arr[10] = {1, 3, 4, 2, 5, 7, 9, 10, 6, 8};
    Bubble_Sort(arr, 0, 9, Inc_Judge);
    for (int i = 0; i < 10; i += 1)
        printf("%d ", arr[i]);
}

int Inc_Judge(int a, int b)
{
    if (a > b)
        return 1;
    else 
        return 0;
}