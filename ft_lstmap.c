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

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstmap.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>

static void	result(int ok)
{
	if (ok)
		printf("\033[32m[OK]\033[0m ");
	else
		printf("\033[31m[KO]\033[0m ");
}

static void	check(const char *label, int ok)
{
	result(ok);
	printf("%s\n", label);
}

static void	*dup_double(void *content)
{
	int	*r;

	r = malloc(sizeof(int));
	if (!r)
		return (NULL);
	*r = *(int *)content * 2;
	return (r);
}

static void	del_none(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*lst;
	t_list	*map;
	int		v[3];
	int		ok;

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	lst = ft_lstnew(&v[0]);
	lst->next = ft_lstnew(&v[1]);
	lst->next->next = ft_lstnew(&v[2]);
	map = ft_lstmap(lst, dup_double, free);
	ok = (map && ft_lstsize(map) == 3);
	ok = ok && *(int *)map->content == 2
		&& *(int *)map->next->content == 4
		&& *(int *)map->next->next->content == 6;
	check("ft_lstmap doubles each value", ok);
	check("ft_lstmap original untouched", v[0] == 1 && v[2] == 3);
	check("ft_lstmap(NULL) == NULL",
		ft_lstmap(NULL, dup_double, free) == NULL);
	ft_lstclear(&map, free);
	ft_lstclear(&lst, del_none);
	return (0);
}
*/
