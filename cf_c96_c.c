#include <stdlib.h>

char upanddown(char c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    else
        return (c);  
}

int to_find (char *src, char *f)
{
    for (int i = 0; src[i] != '\0'; i++)
        for (int j = 0; (src[i + j] == f[j] || src[i + j] == (f[j] + 32)); j++)
            if (f[j + 1] == '\0')
                return (i);
    return (-1);
}

int main (int ac, char **av)
{
    int n = atoi(av[1]);
    int lung[n];
    char copy = av[n + 2][0];

    if (n < 1 || n > 100)
        return (0);

    for (int i = 2; i < (n + 2); i++)
    {
        for (int j = 0; av[i][j] != '\0'; j++)
            av[i][j] = upanddown(av[i][j]);
        lung[i - 2] = to_find(av[n + 1], av[i]);
    }

    for (int i = 2; i < (n + 2); i++)
    {
        /* 
            va controllato lung[i - 2]: non deve essere -1. parti copiando tutte le lettere in quel modo, ovviamente stando 
            attenti al case delle lettere nella fonte. 
            NB: potrebbero esserci problemi: riguarda bene la richiesta!
            link... https://codeforces.com/contest/96/problem/C
        */
    }  


}