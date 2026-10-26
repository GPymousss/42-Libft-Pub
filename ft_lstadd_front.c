/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:14:11 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:59:02 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstadd_front.c -L. -lft && ./a.out
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

	lst = NULL;
	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	ft_lstadd_front(&lst, a);
	check("ft_lstadd_front on empty list", lst == a && a->next == NULL);
	ft_lstadd_front(&lst, b);
	check("ft_lstadd_front new head", lst == b && b->next == a);
	ft_lstadd_front(&lst, NULL);
	check("ft_lstadd_front(NULL) no change", lst == b);
	free(a);
	free(b);
	return (0);
}
*/
