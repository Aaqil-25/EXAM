#include "list.h"

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int tmp;

    while(lst && lst->next)
    {
        if((*cmp)(lst->next, lst->next->data) == 0)
        {
            tmp = lst->next;
            lst->next = lst->next->data;
            lst->next->data = tmp;
            lst = start  
        }
        else
            lst = lst->next;
    }
    return (start);
}