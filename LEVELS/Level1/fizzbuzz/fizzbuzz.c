#include <unistd.h>

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        write(STDOUT_FILENO, str++, 1);
}

void lazy_putnbr(int nbr)
{
    if(nbr > 9)
    {
        lazy_putnbr(nbr / 10);
        lazy_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

void fizzbuzz(int start, int end)
{
    while(start <= end)
    {
        if(start % 3 == 0 && start % 5 == 0)
            ft_putstr("fizzbuzz");
        else if(start % 3 == 0)
            ft_putstr("fizz");
        else if(start % 5 == 0)
            ft_putstr("buzz");
        else
            lazy_putnbr(start);
        ft_putchar('\n');
        start++;
    }

}

int main(void)
{
    fizzbuzz(1, 100);
    return (0);
}