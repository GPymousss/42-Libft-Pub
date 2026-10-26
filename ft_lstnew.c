/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:14:00 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:59:04 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstnew.c -L. -lft && ./a.out
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
	t_list	*node;
	int		v;

	v = 42;
	node = ft_lstnew(&v);
	check("ft_lstnew not NULL", node != NULL);
	check("ft_lstnew content", node && node->content == &v);
	check("ft_lstnew next NULL", node && node->next == NULL);
	free(node);
	node = ft_lstnew(NULL);
	check("ft_lstnew(NULL) content NULL", node && node->content == NULL);
	free(node);
	return (0);
}
*/
