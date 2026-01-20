#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"



template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}






template <typename T>
MutantStack<T>::iterator::iterator()
{
    pointer = NULL;
}

template <typename T>
MutantStack<T>::iterator::iterator(T* p)
{
    pointer = p;
}

template <typename T>
MutantStack<T>::iterator::iterator(const iterator &other)
{
    pointer = other.pointer;
}

template <typename T>
typename MutantStack<T>::iterator&
MutantStack<T>::iterator::operator=(const iterator &other)
{
    if (this != &other)
        pointer = other.pointer;
    return *this;
}

template <typename T>
MutantStack<T>::iterator::~iterator() {}








template <typename T>
T& MutantStack<T>::iterator::operator*()
{
    return *pointer;
}

template <typename T>
typename MutantStack<T>::iterator
MutantStack<T>::iterator::operator++()
{
    ++pointer;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator
MutantStack<T>::iterator::operator++(int)
{
    iterator tmp(*this);
    ++pointer;
    return tmp;
}

template <typename T>
typename MutantStack<T>::iterator
MutantStack<T>::iterator::operator--()
{
    --pointer;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator
MutantStack<T>::iterator::operator--(int)
{
    iterator tmp(*this);
    --pointer;
    return tmp;
}

template <typename T>
typename MutantStack<T>::iterator
MutantStack<T>::iterator::operator-(int num)
{
    return iterator(pointer - num);
}

template <typename T>
typename MutantStack<T>::iterator
MutantStack<T>::iterator::operator+(int num)
{
    return iterator(pointer + num);
}

template <typename T>
bool MutantStack<T>::iterator::operator==(iterator &other)
{
    return pointer == other.pointer;
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(iterator &other)
{
    return pointer != other.pointer;
}






template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return iterator(&this->c.front());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return iterator(&this->c.front() + this->c.size());
}

#endif
