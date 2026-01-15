#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm> 
#include <list>
#include <deque>
#include <set>

template <typename T>
typename T::iterator easyfind(T& t,int i)
{
    typename T::iterator find_it = find(t.begin(),t.end(),i);
    if(find_it == t.end())
        throw std::runtime_error("not found");
    return(find_it);   
}


#endif