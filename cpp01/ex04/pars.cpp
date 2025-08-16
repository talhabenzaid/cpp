#include "Replace.hpp"

int pars(int argc,char **argv)
{
    if (argc != 4)
    {
        std::cerr << "must be <input> <s1> <s2>\n";
        return (1);
    }
    if(!argv[2][0] || !argv[3][0])
    {
        std::cerr << "empty string\n";
        return (1);
    }
    return(0);
}