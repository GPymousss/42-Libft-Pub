/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:34:15 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 13:57:41 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (char)c)
			r = (char *)s;
		s++;
	}
	if (*s == (char)c)
		r = (char *)s;
	return (r);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strrchr.c -L. -lft && ./a.out
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
	const char	*s;

	s = "Hello 42";
	check("ft_strrchr 'l'", ft_strrchr(s, 'l') == strrchr(s, 'l'));
	check("ft_strrchr 'H'", ft_strrchr(s, 'H') == strrchr(s, 'H'));
	check("ft_strrchr '\\0'", ft_strrchr(s, '\0') == strrchr(s, '\0'));
	check("ft_strrchr 'z' (absent)", ft_strrchr(s, 'z') == strrchr(s, 'z'));
	check("ft_strrchr 'l' + 256",
		ft_strrchr(s, 'l' + 256) == strrchr(s, 'l' + 256));
	return (0);
}
*/
