#pragma once

#include <iterator>

template<typename RandomIt>
void _swap(RandomIt a, RandomIt b)
{
    std::swap(*a, *b);
}

template<typename RandomIt>
void nth_element(RandomIt a, RandomIt n, RandomIt b)
{
    typename std::iterator_traits<RandomIt>::value_type n_val = *n;
    RandomIt l = a - 1;
    RandomIt r = b - 1;
    _swap(n, r);

    for (RandomIt j = a; j <= r; j++)
    {
        if (*j <= n_val)
        {
            l++;
            _swap(l, j);
        }
        
    }

    _swap(l + 1, r);
}