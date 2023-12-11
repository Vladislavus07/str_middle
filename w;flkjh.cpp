#include <iostream>
#include <string>
using namespace std;

bool itc_isDigit(unsigned char c)
{
    if ('0' <= c && c <= '9')
        return true;
    else
        return false;
}
