/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:34:15 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:34:17 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int flag;

    if(ac == 2)
    {
        flag = 0;
        i = 0;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if(!(av[1][i] == ' ' || av[1][i] == '\t')){
                if(flag)
                    write(1," ",1);
                flag = 0;
                write(1,&av[1][i],1);
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}