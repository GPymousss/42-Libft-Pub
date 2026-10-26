/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:14:21 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:59:11 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstsize.c -L. -lft && ./a.out
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

	check("ft_lstsize(NULL) == 0", ft_lstsize(NULL) == 0);
	lst = ft_lstnew(NULL);
	check("ft_lstsize 1 node", ft_lstsize(lst) == 1);
	lst->next = ft_lstnew(NULL);
	lst->next->next = ft_lstnew(NULL);
	check("ft_lstsize 3 nodes", ft_lstsize(lst) == 3);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
*/
