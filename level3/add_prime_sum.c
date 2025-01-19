#include <unistd.h>

int ft_atoi(char *s)
{
    int res;
    res = 0;
    while(*s)
        res = res * 10 + *s++ - 48;
    return res;
}

void put_nbr(int nbr)
{
    if(nbr >= 10)
        put_nbr(nbr / 10);
    char digit = nbr % 10 + '0';
    write(1, &digit, 1);
}

int is_prime(int nbr){
    int i = 2;
    if(nbr <= 1)
        return 0;
    while(i * i <= nbr)
    {
        if(nbr % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac , char **av)
{
    if(ac == 2){
        int sum = 0;
        int nbr = ft_atoi(av[1]);
        while(nbr > 0)
        {
            if(is_prime(nbr))
                sum+=nbr;
            nbr--;
        }
        put_nbr(sum);
    }

    if (ac != 2)
		put_nbr(0);
	write(1, "\n", 1);
	return (0);

}