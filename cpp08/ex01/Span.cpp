#include "Span.hpp"

Span::Span()
{
    N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        N = other.N ;
        v  = other.v ;
    }
    return *this;
}

Span::~Span()
{

}

void Span::addNumber(int n)
{
    if (v.size() >= N)
        throw std::runtime_error("Span is full");
    v.push_back(n);
}

int Span::shortestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough numbers");

    std::vector<int> tmp(v);
    std::sort(tmp.begin(), tmp.end());

    int min = tmp[1] - tmp[0];

    for (size_t i = 2; i < tmp.size(); ++i)
    {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < min)
            min = diff;
    }

    return min;
}

int Span::longestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough numbers");

    return *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
}
