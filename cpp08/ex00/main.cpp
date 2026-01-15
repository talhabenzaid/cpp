#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        std::cout << "vector: "
                  << *easyfind(v, 2) << std::endl;

        std::list<int> l;
        l.push_back(10);
        l.push_back(20);
        l.push_back(30);

        std::cout << "list: "
                  << *easyfind(l, 20) << std::endl;

        std::deque<int> d;
        d.push_back(100);
        d.push_back(200);
        d.push_back(300);

        std::cout << "deque: "
                  << *easyfind(d, 300) << std::endl;

        std::cout << *easyfind(v, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
