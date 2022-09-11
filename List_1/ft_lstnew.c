/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   ft_lstnew.c                                           :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 10:01 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#include "struct_list.h"

t_list *ft_lstnew(void *node)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->node = node;
    new->next = NULL;
    return (new);
}    
