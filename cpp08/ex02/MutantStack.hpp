#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>



template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack &other);
        ~MutantStack();

        class iterator
        {
            private:
                T* pointer;
            public:
                iterator();
                iterator(T* pointer);
                iterator(const iterator &other);
                iterator& operator=(const iterator &other);
                ~iterator();
                T& operator*();
                iterator operator++();
                iterator operator++(int);
                iterator operator--();
                iterator operator--(int);
                iterator operator-(int num);
                iterator operator+(int num);
                bool operator==(iterator &other);
                bool operator!=(iterator &other);
        };

        iterator begin();
        iterator end();
};

#include "MutantStack.tpp" 


#endif