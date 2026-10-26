/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:15:14 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:55:15 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstclear.c -L. -lft && ./a.out
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

static void	del_flag(void *content)
{
	*(int *)content = 1;
}

int	main(void)
{
	t_list	*lst;
	int		f[3];

	f[0] = 0;
	f[1] = 0;
	f[2] = 0;
	lst = ft_lstnew(&f[0]);
	lst->next = ft_lstnew(&f[1]);
	lst->next->next = ft_lstnew(&f[2]);
	ft_lstclear(&lst, del_flag);
	check("ft_lstclear sets list to NULL", lst == NULL);
	check("ft_lstclear calls del on all", f[0] && f[1] && f[2]);
	ft_lstclear(&lst, del_flag);
	check("ft_lstclear empty list no crash", lst == NULL);
	return (0);
}
*/
