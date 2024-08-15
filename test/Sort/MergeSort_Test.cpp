#include <gtest/gtest.h>
#include <vector>
#include <type_traits>

#include "Sort/MergeSort"

const auto &cmp = [](const int &l, const int &r) -> bool { return l < r; };

TEST(MergeSort_Test, ShortNativeArray)
{
    int arr[16] =
    {
        1, 3, 7, 9, 11,
        12, 6, 0, 15, 14,
        2, 8, 10, 13, 4,
        5
    };

    ptc::mergeSort(arr, arr + 16);

    for (int i = 0; i < 16; i += 1)
        EXPECT_EQ(arr[i], i);
}

TEST(MergeSort_Test, ShortVector)
{
    std::vector arr =
    {
        1, 3, 7, 9, 11,
        12, 6, 0, 15, 14,
        2, 8, 10, 13, 4,
        5
    };

    ptc::mergeSort(arr.begin(), arr.end());

    for (int i = 0; i < 16; i += 1)
        EXPECT_EQ(arr[i], i);
}

TEST(MergeSort_Test, LongNativeArray)
{
    int arr[40] =
    {
        2, 4, 5, 6, 7, 1, 11, 13,
        12, 14, 54, 32, 22, 43, 21, 77,
        96, 11, -114514, 114514, 23, -11, -22, 9,
        -12, 97, 1919810, 88, 90, -9, -14, -13,
        -77, -900, -1919810, -8, 111111, 222222, 33333, 44444444
    };

    ptc::mergeSort(arr, arr + 40);

    for (int i = 0; i < 39; i += 1)
        EXPECT_TRUE(!cmp(arr[i + 1], arr[i])) << i << ' ' << arr[i] << ' ' << arr[i - 1];
}

TEST(MergeSort_Test, WorstCondition)
{
    int *arr = new int[int(1e7)];
    for (int i = 0; i < int(1e7); i += 1)
        arr[i] = int(5e6) - 0;

    ptc::mergeSort(arr, arr + int(1e7));

    for (int i = 1; i < int(1e7); i += 1)
        EXPECT_TRUE(!cmp(arr[i], arr[i - 1]));

    delete[] arr;
}
