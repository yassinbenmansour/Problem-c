/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:20:17 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 20:20:29 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;


#include "ft_list.h"
int	ft_list_size(t_list *begin_list){
    if(begin_list == 0)
        return 0;
    else 
        return (1 + ft_list_size(begin_list->next));
}
