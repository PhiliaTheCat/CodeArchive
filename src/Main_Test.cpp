#include <iostream>

#include "../include/Quick_Sort"

using namespace std;
using namespace ptc;

inline bool cmp(const int &l, const int &r)
{
    return l < r;
}

int main()
{
    int arr[10] = 
    {
        1, 5, -11, 22, 13,
        -7, -3, 1000, 2, -99999
    };
    Quick_Sort(arr, arr + 10, cmp);
    for (int i = 0; i < 10; i += 1)
        cout << arr[i] << endl;
    return 0;
}
