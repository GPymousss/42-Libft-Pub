/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:44:44 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 14:56:43 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, size_t index)
{
	while (index--)
		free(split[index]);
	free(split);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;
	size_t	words;

	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		result[i] = ft_substr(s, 0, len);
		if (!result[i])
			return (free_split(result, i), NULL);
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_split.c -L. -lft && ./a.out
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

static void	test(char const *s, char c, char **exp)
{
	char	**r;
	int		i;
	int		ok;

	r = ft_split(s, c);
	ok = (r != NULL);
	i = 0;
	while (ok && exp[i])
	{
		if (!r[i] || strcmp(r[i], exp[i]) != 0)
			ok = 0;
		i++;
	}
	if (ok && r[i] != NULL)
		ok = 0;
	result(ok);
	printf("ft_split(\"%s\", '%c')\n", s, c);
	i = 0;
	while (r && r[i])
		free(r[i++]);
	free(r);
}

int	main(void)
{
	char	*e1[4];
	char	*e2[1];
	char	*e3[2];
	char	*e4[3];

	e1[0] = "Hello";
	e1[1] = "42";
	e1[2] = "Paris";
	e1[3] = NULL;
	e2[0] = NULL;
	e3[0] = "abc";
	e3[1] = NULL;
	e4[0] = "a";
	e4[1] = "b";
	e4[2] = NULL;
	test("  Hello  42  Paris ", ' ', e1);
	test("", ' ', e2);
	test("    ", ' ', e2);
	test("abc", '\0', e3);
	test(",a,,b,", ',', e4);
	return (0);
}
*/
