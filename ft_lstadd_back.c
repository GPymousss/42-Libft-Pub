/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:14:54 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:59:01 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstadd_back.c -L. -lft && ./a.out
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

int	main(void)
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;
	t_list	*c;

	lst = NULL;
	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	c = ft_lstnew(NULL);
	ft_lstadd_back(&lst, a);
	check("ft_lstadd_back on empty list", lst == a);
	ft_lstadd_back(&lst, b);
	ft_lstadd_back(&lst, c);
	check("ft_lstadd_back order a -> b -> c",
		lst == a && a->next == b && b->next == c && c->next == NULL);
	ft_lstadd_back(&lst, NULL);
	check("ft_lstadd_back(NULL) no change", c->next == NULL);
	ft_lstadd_back(NULL, a);
	check("ft_lstadd_back(NULL lst) no crash", 1);
	free(a);
	free(b);
	free(c);
	return (0);
}
*/
