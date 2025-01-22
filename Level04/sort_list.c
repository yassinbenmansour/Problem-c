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