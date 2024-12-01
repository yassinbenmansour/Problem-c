#include <unistd.h>

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

void first_word(char *str)
{
    int i;
    i = 0;

    while(str[i] == ' ' || str[i] == '\t')
        i++;

    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac , char **av)
{
    if(ac == 2)
        first_word(av[1]);
    ft_putchar('\n');
    return (0);
}

