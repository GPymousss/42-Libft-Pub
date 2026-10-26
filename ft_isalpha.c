/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:11:07 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 13:46:15 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_isalpha.c -L. -lft && ./a.out
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
		if (!ft_isalpha(c) != !isalpha(c))
			ok = 0;
		c++;
	}
	check("ft_isalpha(-1..255) vs isalpha", ok);
	return (0);
}
*/
