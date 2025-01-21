#include <unistd.h>

void ft_putnbr(int nbr)
{
    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    char digit = nbr % 10 + '0';
    write(1, &digit, 1);
}

int main(int ac , char **av)
{
    (void)av;
    ft_putnbr(ac - 1);
    write(1,"\n",1);
    return 0;
}