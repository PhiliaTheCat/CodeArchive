#include <iostream>
#include <vector>

#include "../include/Quick_Sort"

using namespace std;
using namespace ptc;

bool cmp(const int &a, const int &b);

int main()
{
    vector<int> arr = 
    {
        3, 7, 2, 1, 5, 
        9, 10, 4, 8, 6
    };
    Quick_Sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < 10; i += 1)
        cout << arr[i] << ' ';
    cout << endl;
}

bool cmp(const int &a, const int &b)
{
    return a < b;
}
