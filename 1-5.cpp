#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;

long long itc_len(string str)
{
	int a = 0;
	for (int b = 0; str[b] != '\0'; b++)
	{
        	a++;
	}
	return a;
}


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

unsigned char itc_changeCase(unsigned char c)
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
    {
        for (int i = 0; itc_len(s1) > i && itc_len(s2) > i; i++){
            if (s1[i] == s2[i])
                return 1;
        }
        return 0;
    }
    else
        return 0;
}

bool check(string sl)
{
    for (int i = 0; i < itc_len(sl); i++)
        if(!(sl[i] >= 'a' && sl[i] <= 'z') && !(sl[i] >= 'A' && sl[i] <= 'Z'))
            return false;
    return true;
}

string pol(string str, int pr1, int pr2) {
    string str_new = "";
    for (int i = pr1; i < pr2; i++) {
        if (str[i] != ' ') {
            str_new += str[i];
        }
    }
    return str_new;
}

int itc_countWords(string str)
{
    string s = ' ' + str + ' ';
    int pr1 = 0, pr2, kol = 0;
    for (int i = 1; i < itc_len(s); i++)
    {
        if (s[i] == ' ')
        {
            pr2 = i;
            string sl;
            sl = pol(s, pr1, pr2);
            if (check(sl))
                kol++;
            pr1 = pr2;
        }
    }
    return kol;
}
