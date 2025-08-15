#include "Replace.hpp"

int main(int argc,char **argv)
{
    //change the permissions
    if(argc != 4)
    {
        std::cerr << "its must be a filename and two strings\n";
        return(1);
    }
    std::ifstream inputFile(argv[1]);
    // The program must read from the file using an ifstream or equivalent,
// and write using an ofstream or equivalent.
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file." << std::endl;
        return(1);
    }
    else
    {
        std::fstream fio(std::string(argv[1]) + ".replace", std::ios::in | std::ios::out | std::ios::trunc);
        if (!fio.is_open())
        {
            std::cerr << "Error: Could not open file." << std::endl;
            return(1);
        }
        std::string line;
        Replace replace(line);
        while (std::getline(inputFile, line)) 
        {
            replace.set_line(line);
            std::size_t found = replace.get_line().find(argv[2]);
            if(found == std::string::npos)
                fio << replace.get_line() << std::endl;
            else
                fio << argv[3] << std::endl;
        }
    }
}
