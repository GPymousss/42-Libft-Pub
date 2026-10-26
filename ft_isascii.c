/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:47:36 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 13:54:19 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_isascii.c -L. -lft && ./a.out
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
		if (!ft_isascii(c) != !isascii(c))
			ok = 0;
		c++;
	}
	check("ft_isascii(-1..255) vs isascii", ok);
	return (0);
}
*/
