#include <stdlib.h>

char    **ft_split(char *str)
{
        char **split = malloc(1024);
        int i = 0;
        int j= 0;
        int k = 0;
        char *word;
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                i++;
        while(str[i])
        {
                split[j] = malloc(1024);
                word = split[j];
                k = 0;
                while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
                        word[k++] = str[i++];
                while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                        i++;
                word[k] ='\0';
                j++;
        }
        split[j] = NULL;
        return(split);
}