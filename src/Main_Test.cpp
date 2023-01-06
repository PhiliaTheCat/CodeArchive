#include <iostream>

#include "../include/Bubble_Sort"

using namespace std;

inline bool Non_Dec(const int &l, const int &r);

int main()
{
    int arr[15] = 
    {
        4, 12, 7, 5, 102,
        13, 22, -1, -12, 23,
        11, -32, 20, 203, 1
    };
    Bubble_Sort(arr, 0, 14, Non_Dec);
    for (int i = 0; i < 15; i += 1)
        cout << arr[i] << endl;
}

bool Non_Dec(const int &l, const int &r)
{
    return l > r;
}
