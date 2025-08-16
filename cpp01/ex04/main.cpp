#include "Replace.hpp"


int main(int argc, char **argv)
{
   if(pars(argc,argv) == 1)
        return(1);

    std::string input = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream input_file(input);
    if (!input_file.is_open())
    {
        std::cerr << "Could not open input\n";
        return (1);
    }

    std::ofstream output_file(input + ".replace", std::ios::out | std::ios::trunc);
    if (!output_file.is_open())
    {
        std::cerr << "Could not open output\n";
        return (1);
    }

    std::string line;
    while (std::getline(input_file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        output_file << line << '\n';
    }

    std::cout << "Replacement done\n";
    return (0);
}
