/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:45:15 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:06:08 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*copy;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strmapi.c -L. -lft && ./a.out
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

static char	upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*r;

	r = ft_strmapi("hello", upper_even);
	check("ft_strmapi(\"hello\") -> \"HeLlO\"", r && strcmp(r, "HeLlO") == 0);
	free(r);
	r = ft_strmapi("", upper_even);
	check("ft_strmapi(\"\") -> \"\"", r && r[0] == '\0');
	free(r);
	check("ft_strmapi(NULL, f) == NULL", ft_strmapi(NULL, upper_even) == NULL);
	return (0);
}
*/
