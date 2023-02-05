#include <iostream>

#include "../include/Quick_Sort"

using namespace std;

bool Reversed(const int &l, const int &r);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    Quick_Sort(arr, 0, n - 1, Reversed);
    for (int i = 0; i < n; i += 1)
        cout << arr[i];
}

bool Reversed(const int &l, const int &r)
{
    return l > r;
}
