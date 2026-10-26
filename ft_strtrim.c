/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:44:29 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 14:54:01 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*copy;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (start < end)
		copy[i++] = s1[start++];
	copy[len] = '\0';
	return (copy);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strtrim.c -L. -lft && ./a.out
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

static void	test(char const *s1, char const *set, char *exp)
{
	char	*r;

	r = ft_strtrim(s1, set);
	result(r && strcmp(r, exp) == 0);
	printf("ft_strtrim(\"%s\", \"%s\") -> \"%s\"\n", s1, set, r);
	free(r);
}

int	main(void)
{
	test("  xxHello 42xx  ", " x", "Hello 42");
	test("  a b  ", " ", "a b");
	test("xxxx", "x", "");
	test("abc", "", "abc");
	test("", "x", "");
	return (0);
}
*/
