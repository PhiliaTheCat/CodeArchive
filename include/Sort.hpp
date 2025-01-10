#ifndef __INCLUDED_SORT__
#define __INCLUDED_SORT__

#include <functional>
#include <iterator>

namespace ptc
{
    template<class RandomIter, class Compare = std::less<typename std::iterator_traits<RandomIter>::value_type>>
    void insertionSort(RandomIter start, RandomIter end, Compare cmp = Compare {})
    {
        using Iter = RandomIter;
        using Val = typename std::iterator_traits<Iter>::value_type;

        if (end - start <= 1)
            return;

        Iter i = start + 1;
        while (i < end)
        {
            Iter tar;
            {
                Iter l = start, r = i;
                while (r - l > 1)
                {
                    Iter m = l + (r - l) / 2;
                    if (!cmp(*i, *m))
                        l = m;
                    else
                        r = m;
                }

                if (cmp(*i, *l))
                    tar = l;
                else
                    tar = r;
            }

            Val t = *i;
            Iter j = i;
            while (j != tar)
            {
                *j = *(j - 1);
                j -= 1;
            }

            *tar = t;

            i += 1;
        }
    }

    template<class RandomIter, class Compare = std::less<typename std::iterator_traits<RandomIter>::value_type>>
    void mergeSort(RandomIter start, RandomIter end, Compare cmp = Compare {})
    {
        using Iter = RandomIter;
        using Val = typename std::iterator_traits<Iter>::value_type;
        using Diff = typename std::iterator_traits<Iter>::difference_type;

        static const Diff CAP = 32;

        // Insertion sort if short enough
        if (end - start <= CAP)
            return insertionSort(start, end, cmp);

        // Regular merge sort
        // Division
        mergeSort(start, start + (end - start) / 2, cmp);
        mergeSort(start + (end - start) / 2, end, cmp);

        // Merge
        Val *arr = new Val[end - start];
        Iter i = start;
        Iter j = start + (end - start) / 2;
        Val *k = arr;
        while (i < start + (end - start) / 2 && j < end)
        {
            if (!cmp(*j, *i))
            {
                *k = *i;
                k += 1;
                i += 1;
            }
            else
            {
                *k = *j;
                k += 1;
                j += 1;
            }
        }
        if (i < start + (end - start) / 2)
        {
            do
            {
                *k = *i;
                k += 1;
                i += 1;
            }
            while (i < start + (end - start) / 2);
        }
        else if (j < end)
        {
            do
            {
                *k = *j;
                k += 1;
                j += 1;
            }
            while (j < end);
        }

        // Write back
        i = start;
        k = arr;
        while (i < end)
        {
            *i = *k;
            k += 1;
            i += 1;
        }

        delete[] arr;
    }
}

#endif
