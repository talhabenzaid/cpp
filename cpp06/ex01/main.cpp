#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data;
    data.idx = 1;
    data.info = "Test";

    uintptr_t serialize = Serializer::serialize(&data);
    Data* deserialize = Serializer::deserialize(serialize);

    std::cout <<"data : idx = " << data.idx << " info = " << data.info << std::endl;
    std::cout <<"ptr  : idx = " << deserialize->idx << " info = " << deserialize->info << std::endl;

    return 0;
}
