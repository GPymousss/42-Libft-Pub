/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:26:24 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:30:58 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_toupper.c -L. -lft && ./a.out
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
		if (ft_toupper(c) != toupper(c))
			ok = 0;
		c++;
	}
	check("ft_toupper(-1..255) vs toupper", ok);
	return (0);
}
*/
