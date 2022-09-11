/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   ft_lstadd_front.c                                     :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 12:03 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#include "struct_list.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!lst)
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
}