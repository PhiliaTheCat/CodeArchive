#include <iostream>
#include "../include/Merge_Sort"

using namespace std;

bool To_Swap_Dec_Int(int l, int r);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    Merge_Sort(arr, 0, n - 1, To_Swap_Dec_Int);
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << ' ';
        if (i % 5 == 4)
            cout << endl;
    }

}

bool To_Swap_Dec_Int(int l, int r)
{
    if (l < r)
        return true;
    else
        return false;
}
