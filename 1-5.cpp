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

unsigned char itc_chargeCase(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
            return c - 32;
        else if (c >= 'A' &&  c <= 'Z')
            return c + 32;
        else
            return c;
}

bool itc_Compare(string s1, string s2)
{
    if (itc_len(s1) == itc_len(s2))
        for (int i = 0; itc_len(s1) > i && itc_len(s2) > i; i++)
            if (s1[i] == s2[i])
                return 1;
            else
                return 0;

     else
        return 0;
}
