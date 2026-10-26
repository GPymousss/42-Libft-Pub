/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:42:43 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 15:59:45 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	v;
	size_t			i;

	ptr = (unsigned char *)s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = v;
		i++;
	}
	return (s);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_memset.c -L. -lft && ./a.out
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
	unsigned char	a[20];
	unsigned char	b[20];
	void			*r;

	memset(a, 'A', 20);
	memset(b, 'A', 20);
	r = ft_memset(a, 'x', 10);
	memset(b, 'x', 10);
	check("ft_memset 10 bytes", memcmp(a, b, 20) == 0);
	check("ft_memset returns s", r == a);
	ft_memset(a, 300, 5);
	memset(b, 300, 5);
	check("ft_memset c = 300 (cast)", memcmp(a, b, 20) == 0);
	ft_memset(a, 'z', 0);
	check("ft_memset n = 0", memcmp(a, b, 20) == 0);
	return (0);
}
*/
