#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array
{
    private:
        T* arr;
        unsigned int len;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        unsigned int size() const;

        T& operator[](unsigned int index);
};

#include "Array.tpp"

#endif
