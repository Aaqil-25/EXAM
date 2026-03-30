#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *c;
    while(src[len])
    {
        len++;
    }
    c = (char *)malloc(sizeof(char) * ( len + 1));
    if (!c)
        return (NULL);
    while(src[i])
    {
        c[i] = src[i];
        i++;
    }
    c[i] = '\0';
    return(c);

}