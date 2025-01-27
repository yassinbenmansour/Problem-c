/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:54:04 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/27 10:28:34 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void rev_wstr(char *str)
{
    int i;
    int j;
    int first_word;
    i = 0;
    first_word = 1;
    
    while(str[i])
        i++;
        
    while(i >= 0)
    {
        while(i >= 0 && (str[i] == '\0' || str[i] == ' ' || str[i] == '\t'))
            i--;
        j = i;
        while (j >= 0 && !(str[j] == ' ' || str[j] == '\t'))
            j--;

        if(first_word == 0)
            write(1," ",1);
        write(1,str + j + 1, i - j);
        first_word = 0;
        i = j;
    }
}

int main(int ac, char **av)
{
    int i;
    if(ac == 2)
        rev_wstr(av[1]);
    write(1,"\n",1);
    return 0;
}