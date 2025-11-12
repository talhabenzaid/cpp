#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) 
{
    (void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool isChar(const std::string &str)
{
    return (str.length() == 1 && !std::isdigit(str[0]));
}

bool isInt(const std::string &str)
{
    if (str.empty())
        return (false);
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (i >= (int)str.length())
        return (false);
    for (; i < (int)str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

bool isFloat(const std::string &str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return (true);

    bool dot = false;
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;

    for (; i < (int)str.length() - 1; i++)
    {
        if (str[i] == '.')
        {
            if (dot)
                return (false);
            dot = (true);
        }
        else if (!std::isdigit(str[i]))
            return (false);
    }
    return (str[str.length() - 1] == 'f' && dot);
}

bool isDouble(const std::string &str)
{
    if (str == "-inf" || str == "+inf" || str == "nan")
        return (true);

    bool dot = false;
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;

    for (; i < (int)str.length(); i++)
    {
        if (str[i] == '.')
        {
            if (dot)
                return (false);
            dot = true;
        }
        else if (!std::isdigit(str[i]))
            return (false);
    }
    return (dot);
}

void printChar(double val)
{
    std::cout << "char: ";
    if (std::isnan(val) || val < 0 || val > 127)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(val)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
}

void printInt(double val)
{
    std::cout << "int: ";
    if (std::isnan(val) || val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(val) << std::endl;
}

void printFloat(double val)
{
    std::cout << "float: ";
    if (std::isnan(val))
        std::cout << "nanf" << std::endl;
    else if (val == std::numeric_limits<float>::infinity())
        std::cout << "+inff" << std::endl;
    else if (val == -std::numeric_limits<float>::infinity())
        std::cout << "-inff" << std::endl;
    else
        std::cout << static_cast<float>(val) << "f" << std::endl;
}

void printDouble(double val)
{
    std::cout << "double: ";
    if (std::isnan(val))
        std::cout << "nan" << std::endl;
    else if (val == std::numeric_limits<double>::infinity())
        std::cout << "+inf" << std::endl;
    else if (val == -std::numeric_limits<double>::infinity())
        std::cout << "-inf" << std::endl;
    else
        std::cout << val << std::endl;
}

void castInt(const std::string &str)
{
    double val = static_cast<double>(std::strtol(str.c_str(), NULL, 10));
    printChar(val);
    printInt(val);
    printFloat(val);
    printDouble(val);
}

void castFloat(const std::string &str)
{
    double val = static_cast<double>(std::strtof(str.c_str(), NULL));
    printChar(val);
    printInt(val);
    printFloat(val);
    printDouble(val);
}

void castDouble(const std::string &str)
{
    double val = static_cast<double>(std::strtod(str.c_str(), NULL));
    printChar(val);
    printInt(val);
    printFloat(val);
    printDouble(val);
}

void castChar(const std::string &str)
{
    double val = static_cast<double>(str[0]);
    printChar(val);
    printInt(val);
    printFloat(val);
    printDouble(val);
}

void ScalarConverter::convert(const std::string &str)
{
    if (isInt(str))
        castInt(str);
    else if (isFloat(str))
        castFloat(str);
    else if (isDouble(str))
        castDouble(str);
    else if (isChar(str))
        castChar(str);
    else
        std::cout << "Error: invalid" << std::endl;
}