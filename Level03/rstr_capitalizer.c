/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:04:14 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/27 10:28:53 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr(char *str){
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i] == '\t' || !str[i+1]))
            str[i] -=32;
        write(1,&str[i],1);
        i++;
    }
}

int main(int ac , char **av)
{
    int i;
    if(ac < 2)
        write(1,"\n",1);
    else 
    {   
        i = 1;
        while(i < ac)
        {
            rstr(av[i]);
            write(1,"\n",1);
            i++;
        }
    }
    return 0;
}