/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:34:31 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:34:33 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = abs((end - start)) +1;
    int *res = (int *)malloc(sizeof(int) * len);

    while(i < len)
    {
        if(start < end)
        {
            res[i] = start;
            start++;
            i++;
        }
        else {
            res[i] = start;
            start--;
            i++;
        }
    }
    return res;
}
