/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:26:52 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 15:20:12 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strlen.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>
#include <string.h>

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
	char	big[1001];

	memset(big, 'a', 1000);
	big[1000] = '\0';
	check("ft_strlen(\"\")", ft_strlen("") == strlen(""));
	check("ft_strlen(\"a\")", ft_strlen("a") == strlen("a"));
	check("ft_strlen(\"Hello 42\")", ft_strlen("Hello 42") == 8);
	check("ft_strlen(1000 chars)", ft_strlen(big) == strlen(big));
	return (0);
}
*/
