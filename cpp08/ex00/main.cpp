#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(9);
        v.push_back(10);
        std::cout << *easyfind(v,9) << "\n";
    }catch(std::exception  &e)
    {
        std::cout << e.what() << "\n";
    }

}