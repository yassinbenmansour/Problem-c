/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:34:37 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:34:39 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int main(int ac , char **av)
{
    int n1;
    int n2;
    if(ac == 3){
        if((n1 = atoi(av[1])) > 0 && (n2 = atoi(av[2])) > 0)
        {
            while(n2 != 0){
                int tmp = n2;
                n2 = n1 % n2;
                n1 = tmp;
            }
            printf("%d", n1);
        }
    }
    printf("\n");
    return 0;
}