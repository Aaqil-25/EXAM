

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if(str == 0 || str_base < 2 || str_base > 16)
        return (0);
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        int n;
        if(str[i] >= '0' && str[i] <= '9')
            n = str[i] - '0';
        else if(str[i] >= 'A' && str[i] <= 'F')
            n = str[i] - 'A' + 10;
        else if(str[i] >= 'a' && str[i] <= 'f')
            n = str[i] - 'a' + 10;
        else
            break;
        res = res * str_base + n;
        i++;
    }
    return (res * sign);
}

