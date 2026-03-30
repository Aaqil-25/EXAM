#include <unistd.h>

void str_cap(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\0'))
            str[i] -=32;
        write(1,&str[i++],1);
    }
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
		write(1, "\n", 1);
	
	i = 1;
	while (i < argc)
		{
			str_cap(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	
	return (0);
}