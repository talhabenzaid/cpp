#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called\n";
    fixed_point = i << fractional_bits;
}
Fixed::Fixed(const float j)
{
    std::cout << "Float constructor called\n";
    fixed_point = static_cast<int>(roundf(j * (1 << fractional_bits)));
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

float Fixed::toFloat( void ) const
{
    return (float)fixed_point / (1 << fractional_bits);
}

int Fixed::toInt(void) const
{
        return fixed_point >> fractional_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) const
{
    return fixed_point > other.fixed_point;
}

bool Fixed::operator<(const Fixed& other) const
{
    return fixed_point < other.fixed_point;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return fixed_point >= other.fixed_point;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return fixed_point <= other.fixed_point;
}

bool Fixed::operator==(const Fixed& other) const
{
    return fixed_point == other.fixed_point;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return fixed_point != other.fixed_point;
}

Fixed Fixed::operator+(const Fixed& other)
{
    Fixed result;
    result.fixed_point = this->fixed_point + other.fixed_point;
    return result;
}

Fixed Fixed::operator-(const Fixed& other)
{
    Fixed result;
    result.fixed_point = this->fixed_point - other.fixed_point;
    return result;
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed result;
    result.fixed_point = (this->fixed_point * other.fixed_point) >> fractional_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed result;
    result.fixed_point = (this->fixed_point << fractional_bits) / other.fixed_point;
    return result;
}


Fixed& Fixed::operator++()
{
    ++fixed_point;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++fixed_point;
    return temp;
}

Fixed& Fixed::operator--()
{
    --fixed_point;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --fixed_point;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}
