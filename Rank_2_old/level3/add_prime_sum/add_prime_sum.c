#include <unistd.h>


int ft_atoi(char *str)
{
    int res= 0;
    while(*str)
        res = res * 10 + *str++ - '0';
    return (res);
}

int is_prime(int num)
{
    int i = 2;
    if(num <= 1)
        return(0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void put_num(int num)
{
    if (num > 9)
        put_num(num / 10);
    write(1, &"0123456789"[num%10], 1);
}


int main(int ac, char **av)
{
    if(ac == 2)
    {
        int num = ft_atoi(av[1]);
        int sum = 0;
        while(num > 0)
        {
        if (is_prime(num))
            sum += num;
        num--;
        }
        put_num(sum);


    }
    if (!ac == 2)
        write(1,"0", 1);
    write(1, "\n", 1);
}