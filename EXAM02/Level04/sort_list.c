/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:36:08 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:36:09 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap ;
    t_list *start;

    lst = start;

    if(lst != NULL && lst->next != NULL)
    {
        if((*cmp)(lst->data, lst->next->data) == 0){
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            start = lst;
        }
        else {
            lst = lst->next;
        }
    }
    return start;
}