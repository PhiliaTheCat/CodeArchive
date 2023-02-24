#include <iostream>

#include "../include/Modulus"
#include "../include/Quick_Sort"

using namespace std;
using namespace ptc;

template<int Cap> inline bool cmp(const Modulus<Cap> &a, const Modulus<Cap> &b);
template bool cmp<32>(const Modulus<32> &a, const Modulus<32> &b);

int main()
{
    Modulus<30> arr[20] = 
    {
        12, 4, 5, 3, 7,      
        22, 57, 39, 1, 3,
        102, 32, 2, 99, 10,
        1992, 39, 43, 27, 1
    };
    Quick_Sort(arr + 0, arr + 20, cmp<30>);
    for (int i = 0; i < 20; i += 1)
    {
        cout << arr[i] << ' ';
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
}

template<int Cap> bool cmp(const Modulus<Cap> &a, const Modulus<Cap> &b)
{
    return a < b;
}
