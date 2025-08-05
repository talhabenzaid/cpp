#include "Replace.hpp"

Replace::Replace(std::string line) : line(line)
{

}
Replace::~Replace()
{
    // inputFile.close();
    // fio.close();
}
std::string Replace::get_line()
{
    return(line);
}

void Replace::set_line(std::string line)
{
    this ->line = line;
}