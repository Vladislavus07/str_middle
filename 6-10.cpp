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

char itc_sameChar(string str) {
    for(int i = 0; i < itc_len(str); i++)
    {
        int n = 2;
        for (int a = i; a < itc_len(str); j++)
            if (str[a] != ' ' && str[a] == str[i])
            {
                n--;
                if (n == 0) 
                    return str[a];
            }
    }
}
