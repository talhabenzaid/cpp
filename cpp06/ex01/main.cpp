#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data;
    data.idx = 1;
    data.info = "Test";

    uintptr_t raw = Serializer::serialize(&data);
    Data* ptr = Serializer::deserialize(raw);

    std::cout <<"idx=" << data.idx << " info=" << data.info << std::endl;
    std::cout <<"idx=" << ptr->idx << " info=" << ptr->info << std::endl;

    return 0;
}
