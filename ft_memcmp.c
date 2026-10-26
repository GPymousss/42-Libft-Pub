/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:50:58 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 14:53:57 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_memcmp.c -L. -lft && ./a.out
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

static int	sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (0);
}

static void	test(const char *s1, const char *s2, size_t n)
{
	result(sign(ft_memcmp(s1, s2, n)) == sign(memcmp(s1, s2, n)));
	printf("ft_memcmp(\"%s\", \"%s\", %zu)\n", s1, s2, n);
}

int	main(void)
{
	test("abc", "abc", 3);
	test("abc", "abd", 3);
	test("abc", "abd", 2);
	test("\200", "a", 1);
	test("ab\0c", "ab\0d", 4);
	test("x", "y", 0);
	return (0);
}
*/
