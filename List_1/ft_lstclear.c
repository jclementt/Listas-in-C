/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   ft_lstclear.c                                         :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 12:32 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#include "struct_list.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *new;

    if (!lst || !del)
        return ;
    while (*lst)
    {
        new = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = new;
    }
    *lst = 0;
}