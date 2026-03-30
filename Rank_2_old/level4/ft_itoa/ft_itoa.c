
#include <unistd.h>
#include <stdlib.h>

int count(nbr)
{
    int count = 0;
    if(nbr == 0)
        return(1);
    if(nbr <= 0)
    {
        count++;
        nbr *= -1;
    }
    while(nbr != 0)
    {
        nbr/= 10;
        count++;
    }
    return (count);
}
char	*ft_itoa(int nbr)
{
   int len = count(nbr);
   char *res = malloc(sizeof (char) * (len + 1));
   res[len] = '\0';
   len--;

    if(nbr == -2147483648)
    {
        res = "-2147483648";
        return res;
    }
    if(nbr < 0)
    {
        res[0]= '-';
        nbr *= -1;
    }
    while(nbr > 9)
    {
        res[len] = nbr % 10 + '0';
        nbr /= 10;
        len--;
    }
    res[len] = nbr + '0';

    return (res);
}

