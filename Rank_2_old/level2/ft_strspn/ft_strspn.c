
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

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while(s[i])
    {
        if(ft_strchr((char *)accept, s[i]) == 0)
            break;
        i++;
    }
    return (i);
}

int main()
{
    printf("%ld", ft_strspn("abcd123", "abc"));
    printf("%ld", strspn("abcd123", "abc"));
}
