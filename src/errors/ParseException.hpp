// Error.hpp without inline definitions
#ifndef ERROR_HPP
#define ERROR_HPP

#include <string>
#include <exception>
#include "Span.hpp"
using namespace std;

class ParseException : public exception
{
private:
    Span location;
    char *expression;

public:
    char *what();

    virtual string display() = 0;
};

#endif // ERROR_HPP
