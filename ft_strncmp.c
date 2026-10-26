/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:58:59 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 16:47:42 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strncmp.c -L. -lft && ./a.out
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
	result(sign(ft_strncmp(s1, s2, n)) == sign(strncmp(s1, s2, n)));
	printf("ft_strncmp(\"%s\", \"%s\", %zu)\n", s1, s2, n);
}

int	main(void)
{
	test("abc", "abc", 3);
	test("abc", "abd", 3);
	test("abc", "abd", 2);
	test("abc", "ab", 3);
	test("ab", "abc", 3);
	test("", "a", 1);
	test("\200", "a", 1);
	test("abc", "xyz", 0);
	test("test\0a", "test\0b", 6);
	return (0);
}
*/
