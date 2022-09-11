/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   struct_list.h                                         :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 11:40 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#ifndef STRUCT_LIST_H
# define STRUCT_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void          *node;
    struct s_list *next;
}   t_list;

t_list      *ft_lstnew(void *node);
t_list      *ft_lstlast(t_list *lst);
t_list      *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int         ft_lstsize(t_list *lst);
void        ft_lstadd_front(t_list **lst, t_list *new);
void        ft_lstadd_back(t_list **lst, t_list *new);
void        ft_lstdelone(t_list *lst, void (*del)(void*));
void        ft_lstclear(t_list **lst, void (*del)(void*));
void        ft_lstiter(t_list *lst, void (*f)(void *));

#endif