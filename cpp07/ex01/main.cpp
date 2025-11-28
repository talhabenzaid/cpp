#include <string>
#include <iostream>
#include "iter.hpp"

void int_def(int &i)
{
    i++;
}

void str_def(std::string &s)
{
    s += "_add";
}

int main()
{
    int test1[] = {55, 11, 33, 88, 33};
    iter(test1, 5, int_def);
    for (int i = 0; i < 5; ++i)
        std::cout << test1[i] << " ";
    std::cout << std::endl;


    std::string test2[] = {"hi", "this", "test", "for", "string"};
    iter(test2, 5, str_def);
    for (int i = 0; i < 5; ++i)
        std::cout << test2[i] << " ";
    std::cout << std::endl;

    return 0;
}
