/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:15:32 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:58:45 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*newe;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		content = f(lst->content);
		newe = ft_lstnew(content);
		if (!newe)
		{
			if (content)
				del(content);
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, newe);
		lst = lst->next;
	}
	return (newl);
}
