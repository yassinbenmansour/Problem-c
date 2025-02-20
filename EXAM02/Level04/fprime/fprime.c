/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:34:50 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:34:51 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int ac , char **av)
{
    int i;
    int nbr ;

    if(ac == 2)
    {
        nbr = atoi(av[1]);
        if(nbr == 1)
            printf("1");
        
        i = 1;
        while(nbr >= ++i)
        {
            if(nbr % i == 0){
                printf("%d",i);
                if(nbr == i)
                    break;
                printf("*");
                nbr /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return 0;
}