/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:15:05 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 17:59:31 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_lstdelone.c -L. -lft && ./a.out
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
	t_list	*node;
	int		flag;

	flag = 0;
	node = ft_lstnew(&flag);
	ft_lstdelone(node, del_flag);
	check("ft_lstdelone calls del on content", flag == 1);
	ft_lstdelone(NULL, del_flag);
	check("ft_lstdelone(NULL) no crash", 1);
	return (0);
}
*/
