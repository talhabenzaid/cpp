#ifndef REPLACE_HPP
#define REPLACE_HPP 

#include <iostream>
#include <fstream>
#include <string>


class Replace
{
    private:
        std::string line;
    public:
        Replace(std::string line);
        ~Replace();
        std::string get_line();
        void set_line(std::string line);

};



#endif