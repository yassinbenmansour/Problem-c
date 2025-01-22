/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 01:18:50 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:13:03 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);


char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = -1;
	len = 0;
	while (str[len])
		len++;
	while (++i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	return (str);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello";
	printf("%s", ft_strrev(str));
	return (0);
}