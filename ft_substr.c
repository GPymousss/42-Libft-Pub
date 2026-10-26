/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:52:22 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 17:54:26 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*copy;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_substr.c -L. -lft && ./a.out
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

static void	test(char const *s, unsigned int start, size_t len, char *exp)
{
	char	*r;

	r = ft_substr(s, start, len);
	result(r && strcmp(r, exp) == 0);
	printf("ft_substr(\"%s\", %u, %zu) -> \"%s\"\n", s, start, len, r);
	free(r);
}

int	main(void)
{
	test("Hello 42", 6, 2, "42");
	test("Hello 42", 0, 5, "Hello");
	test("Hello 42", 20, 5, "");
	test("Hello 42", 6, 100, "42");
	test("Hello", 0, 0, "");
	test("", 0, 1, "");
	return (0);
}
*/
