#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack &other);
        MutantStack& operator=(MutantStack &other);
        ~MutantStack();

        class iterator
        {
            private:
                T* pointer;
            public:
                iterator();
                iterator(T* pointer);
                iterator(iterator &other);
                iterator& operator=(iterator &other);
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


#endif