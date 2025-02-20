/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:43:05 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/27 10:53:22 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
    int len;
    len = 0;
    while(str[len])
        len++;
    return len;
}

int main(int ac , char **av)
{
    int check;
    int idx_str1;
    int idx_str2;
    check = 0;
    idx_str1 = 0;
    idx_str2 = 0;
    
    if(ac == 3)
    {
        while(av[1][idx_str1] != '\0')
        {
            while(av[2][idx_str2] != '\0')
            {
                if(av[2][idx_str1] == av[1][idx_str2])
                {
                    check++;
                    break;
                }
                idx_str2++;  
            }
            idx_str1++; 
        }
        if(check == ft_strlen(av[1]))
                write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
    return 0;
}