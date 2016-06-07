#include <iostream>
#include <vector>
#include "nth_element.h"


int main()
{
    int n = 10;
    std::vector<int> test;
    for (int i = 0; i < 10; ++i)
    {
        int r = rand()%n;
        test.push_back(r);
        std::cout << r << " ";
    }

    std::cout << std::endl;

    nth_element(test.begin(), test.end() - 1, test.end());

    for (auto item : test)
    {
        std::cout << item << " ";
    }

    std::cout << std::endl;

    return 0;
}