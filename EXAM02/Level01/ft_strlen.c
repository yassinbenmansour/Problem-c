/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 01:08:28 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:09:19 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);

#include <unistd.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;

    while(str[len] != '\0')
        len++;
    return (len);
}