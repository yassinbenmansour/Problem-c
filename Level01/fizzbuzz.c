/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 00:47:05 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:08:32 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>

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