/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:14:35 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:38:49 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstlast.c -L. -lft && ./a.out
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
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	c = ft_lstnew(NULL);
	a->next = b;
	b->next = c;
	check("ft_lstlast(NULL) == NULL", ft_lstlast(NULL) == NULL);
	check("ft_lstlast 1 node", ft_lstlast(c) == c);
	check("ft_lstlast 3 nodes", ft_lstlast(a) == c);
	free(a);
	free(b);
	free(c);
	return (0);
}
*/
