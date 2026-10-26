/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:55:09 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 15:59:15 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= ' ' && ch <= '~')
		return (1);
	return (0);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_isprint.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>
#include <ctype.h>

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
	int	c;
	int	ok;

	ok = 1;
	c = -1;
	while (c <= 255)
	{
		if (!ft_isprint(c) != !isprint(c))
			ok = 0;
		c++;
	}
	check("ft_isprint(-1..255) vs isprint", ok);
	return (0);
}
*/
