void Bubble_Sort(int arr[], int l, int r, int (*judge)(int, int))
{
    int flag = 1;
    for (int i = r; i > l && flag; i -= 1)
    {
        flag = 0;
        for (int j = 0; j < i; j += 1)
        {
            if (judge(arr[j], arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
    }
}