#include <iostream>

#include "../include/Modulus"
#include "../include/Quick_Sort"

using namespace std;
using namespace ptc;

template<int Cap> bool cmp(const Modulus<Cap> &l, const Modulus<Cap> &r);

int main()
{
    Modulus<97> arr[20] = 
    {
        13, 103, 24, 3, 197,
        21, 14, 995, 3368, 2504,
        12, 11035, 99784, 5203, 112,
        10, 2567, 55, 853, 86
    };
    for (int i = 0; i < 20; i += 1)
    {
        cout << arr[i] << ' ';
        if (i % 5 == 4)
            cout << endl;
    }
    for (int i = 0; i < 20; i += 1)
        arr[i] *= arr[i];
    for (int i = 0; i < 20; i += 1)
    {
        cout << arr[i] << ' ';
        if (i % 5 == 4)
            cout << endl;
    }
    Quick_Sort(arr, arr + 20, cmp<97>);
    for (int i = 0; i < 20; i += 1)
    {
        cout << arr[i] << ' ';
        if (i % 5 == 4)
            cout << endl;
    }
}

template<int Cap> bool cmp(const Modulus<Cap> &l, const Modulus<Cap> &r)
{
    return l < r;
}
