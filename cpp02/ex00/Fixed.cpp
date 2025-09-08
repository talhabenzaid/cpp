#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    fixed_point = other.fixed_point;
}

Fixed& Fixed::operator=( Fixed& other)
{
    std::cout << "Copy assignment operator called \n";
    if(this != &other)
        fixed_point = other.fixed_point;
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return(fixed_point);
}