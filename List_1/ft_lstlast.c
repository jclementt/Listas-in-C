/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   ft_lstlast.c                                          :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 12:18 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#include "struct_list.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}
