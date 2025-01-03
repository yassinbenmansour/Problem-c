/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 00:47:05 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/02 02:12:38 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	lazy_putnbr(int nbr)
{
	if (nbr > 9)
	{
		lazy_putnbr(nbr / 10);
		lazy_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void	fizzbuzz(int start, int end)
{
	while (start <= end)
	{
		if (start % 3 == 0 && start % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (start % 3 == 0)
			ft_putstr("fizz");
		else if (start % 5 == 0)
			ft_putstr("buzz");
		else
			lazy_putnbr(start);
		ft_putchar('\n');
		start++;
	}
}

int	main(void)
{
	fizzbuzz(1, 100);
	return (0);
}