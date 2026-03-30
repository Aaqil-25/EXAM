#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, char c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return (str + i);
        i++;
    }
    return (NULL);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while(s[i])
    {
        if(ft_strchr((char *)reject, s[i]) != 0)
            break;
        i++;
    }
    return (i);
}

int main()
{
    printf("%ld", ft_strcspn("abc123", "hfd"));
    printf("%ld", strcspn("abc123", "hfd"));
}