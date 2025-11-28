#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T *array, const std::size_t length, F def)
{
    for (std::size_t i = 0; i < length; ++i)
        def(array[i]);
}

#endif