/* *************************************************************************** */
/*                                                                             */
/*                                                     :::::::::::  ::::::::   */
/*   ft_lstmap.c                                           :+:    :+:    :+:   */
/*                                                        +:+    +:+           */
/*   By: jclementt <joannapassos16@gmail.com>           +#+     +#+            */
/*                                                     +#+     +#+             */
/*   Created: 2022/09/11 12:16 by jclementt       #+# #+#     #+#    #+#       */
/*   https://github.com/jclementt                 #####       ########         */
/*                                                                             */
/* *************************************************************************** */

#include "struct_list.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new = 0;
	new_elem = 0;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->node));
		if (!new_elem)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, new_elem);
		lst = lst->next;
	}
	return (new);
}