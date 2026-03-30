#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int current = 0;
    current = tab[i];
    if(!tab)
        return(0);
    while(i > len)
    {
        if (tab[i] > current)
            current = tab[i];
        i++;

    }
    return(current);
}

