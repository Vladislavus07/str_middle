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

unsigned char itc_toUpper(unsigned char c)
{
        if (c >= 'a' && c <= 'z')
            return c - 32;
        else
            return c;
}
