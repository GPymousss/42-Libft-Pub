/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:33:45 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:35:08 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strchr.c -L. -lft && ./a.out
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
	check("ft_strchr 'l'", ft_strchr(s, 'l') == strchr(s, 'l'));
	check("ft_strchr 'H'", ft_strchr(s, 'H') == strchr(s, 'H'));
	check("ft_strchr '\\0'", ft_strchr(s, '\0') == strchr(s, '\0'));
	check("ft_strchr 'z' (absent)", ft_strchr(s, 'z') == strchr(s, 'z'));
	check("ft_strchr 'l' + 256",
		ft_strchr(s, 'l' + 256) == strchr(s, 'l' + 256));
	return (0);
}
*/
