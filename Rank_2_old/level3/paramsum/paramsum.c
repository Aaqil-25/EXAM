#include <unistd.h>


void putnum(int num)
{
    if (num / 9)
        putnum(num / 10);
    write(1, &"0123456789"[num%10], 1);
}

int main(int ac, char **av)
{
    (void)*av;
    putnum(ac -1);
    write(1, "\n", 1);
}