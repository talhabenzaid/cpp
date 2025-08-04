#include <iostream>
#include <fstream>
#include <string>

int main(int argc,char **argv)
{
    (void)argv;
    if(argc != 4)
    {
        std::cout << "its must be a filename and two strings\n";
        return(1);
    }
    std::ifstream inputFile(argv[1]);

    if (!inputFile.is_open())
    {
        std::cout << "Error: Could not open file." << std::endl;
        return(1);
    }
    else
    {
        std::string line;
        while (std::getline(inputFile, line)) 
        {
            std::cout << line << std::endl;
        }
        inputFile.close();
    }
}
