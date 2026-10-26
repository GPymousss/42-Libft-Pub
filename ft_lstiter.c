/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:15:23 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:56:53 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstiter.c -L. -lft && ./a.out
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

static void	add_one(void *content)
{
	(*(int *)content)++;
}

int	main(void)
{
	t_list	*lst;
	int		v[3];

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	lst = ft_lstnew(&v[0]);
	lst->next = ft_lstnew(&v[1]);
	lst->next->next = ft_lstnew(&v[2]);
	ft_lstiter(lst, add_one);
	check("ft_lstiter +1 on each node", v[0] == 2 && v[1] == 3 && v[2] == 4);
	ft_lstiter(NULL, add_one);
	check("ft_lstiter(NULL) no crash", 1);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
*/
