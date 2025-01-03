/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 02:02:42 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/02 02:12:18 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;

    while(str[len] != '\0')
        len++;
    return (len);
}

int main(int ac , char **av)
{
    int len;
    len = ft_strlen(av[1]);
    if(ac == 2)
    {
        while(len)
            write(1,&av[1][--len],1);
    }

    write(1,"\n",1);
    return 0;
}
