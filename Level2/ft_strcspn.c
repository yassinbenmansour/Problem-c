/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 23:27:24 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/03 23:32:44 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (reject[count] != '\0')
		{
			if (reject[count] == s[i])
				return (i);
			i++;
		}
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	const char	*str = "abcdef";
// 	const char	*reject = "de";
// 	size_t		result;

// 	result = ft_strcspn(str, reject);
// 	printf("Résultat : %zu\n", result);
// 	return (0);
// }
