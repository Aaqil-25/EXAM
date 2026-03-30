#include "get_next_line.h"

char *ft_strdup(char *src)
{
    char *dst;
    int i = 0;
    while(src[i])
        i++;
    dst = malloc(sizeof(char)*(i + 1));
    if(!dst)
        return(NULL);
    i = 0;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static int buffer_read;
    static int buffer_pos;
    char line[70000];
    int i = 0;

    if(fd < 0 || BUFFER_SIZE <= 0)
        return(NULL);
    while(1)
    {
        if(buffer_pos >= buffer_read)
        {
            buffer_read = read(fd,buffer, BUFFER_SIZE);
            buffer_pos = 0;
            if(buffer_read <= 0)
                break;
        }
        line[i++] = buffer[buffer_pos++];
        if(buffer[buffer_pos] =='\n')
            break;
    }
    line[i] = '\0';
    if(i == 0)
        return(NULL);
    return(ft_strdup(line));
}

int main()
{
    int fd = open("txt.txt", O_RDONLY);
    char *line;
    while(1)
    {
        line = get_next_line(fd);
        if(!line)
            break;
        printf("1:   %s", line);
    }
}