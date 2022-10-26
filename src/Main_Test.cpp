#include <iostream>

#include "../include/Complex"
#include "../include/Merge_Sort"

using namespace std;

inline bool To_Swap_Complex_Inc(Complex a, Complex b);

int main()
{
    int n;
    cin >> n;
    Complex arr[n];
    for (int i = 0; i < n; i += 1)
    {
        double a, b;
        cin >> a >> b;
        arr[i] = Complex(a, b);
    }
    Merge_Sort(arr, 0, n - 1, To_Swap_Complex_Inc);
    for (int i = 0; i < n; i += 1)
        cout << arr[i] << endl;
}

bool To_Swap_Complex_Inc(Complex a, Complex b)
{
    double res1 = a.mod();
    double res2 = b.mod();
    return res1 > res2;
}