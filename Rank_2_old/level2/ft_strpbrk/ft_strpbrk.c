
#include <string.h>
#include <stdio.h>

char *ft_strchr(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return (NULL);
    
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (ft_strchr((char *)s2, s1[i]))
            return((char *)s1 + i);
        i++;
    }
    return (NULL);
}

int main()
{
    printf("%s" , ft_strpbrk("abcd" , "12c345d"));
    printf("%s" , strpbrk("abcd" , "12c345d"));
}