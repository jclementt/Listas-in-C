/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   ft_lstadd_back.c                                      :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 12:33 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#include "struct_list.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!*lst)
    {
        *lst = new;
        return ;
    }
    if (!new)
        return ;
    last = ft_lstlast(*lst);
    last->next = new;
}