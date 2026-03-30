#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int a1 =atoi(av[1]);
        int a2 =atoi(av[3]);

        if (av[2][0] == '*' && av[2][1] == '\0')
            printf("%d", a1 * a2);
        else if (av[2][0] == '/' && av[2][1] == '\0')
            printf("%d", a1 / a2); 
        else if (av[2][0] == '+' && av[2][1] == '\0')
            printf("%d", a1 + a2); 
        else if (av[2][0] == '-' && av[2][1] == '\0')
            printf("%d", a1 - a2);
        else if (av[2][0] == '%' && av[2][1] == '\0')
            printf("%d", a1 % a2);
    }
    printf("\n");
}