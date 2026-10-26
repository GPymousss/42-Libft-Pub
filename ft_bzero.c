/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:52:02 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 15:56:12 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_bzero.c -L. -lft && ./a.out
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
	char	a[10];
	char	b[10];

	memset(a, 'A', 10);
	memset(b, 'A', 10);
	ft_bzero(a + 2, 5);
	memset(b + 2, 0, 5);
	check("ft_bzero 5 bytes", memcmp(a, b, 10) == 0);
	ft_bzero(a, 0);
	check("ft_bzero n = 0", memcmp(a, b, 10) == 0);
	return (0);
}
*/
