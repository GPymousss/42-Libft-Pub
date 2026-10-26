/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:55:36 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 17:55:55 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*result;
	char	*copy;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = (char *)malloc(s1len + s2len + 1);
	if (!result)
		return (NULL);
	copy = result;
	while (*s1)
		*copy++ = *s1++;
	while (*s2)
		*copy++ = *s2++;
	*copy = '\0';
	return (result);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strjoin.c -L. -lft && ./a.out
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

static void	test(char const *s1, char const *s2, char *exp)
{
	char	*r;

	r = ft_strjoin(s1, s2);
	result(r && strcmp(r, exp) == 0);
	printf("ft_strjoin(\"%s\", \"%s\") -> \"%s\"\n", s1, s2, r);
	free(r);
}

int	main(void)
{
	test("Hello ", "42", "Hello 42");
	test("abc", "", "abc");
	test("", "abc", "abc");
	test("", "", "");
	return (0);
}
*/
