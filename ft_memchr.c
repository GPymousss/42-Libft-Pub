/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:48:55 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 14:49:38 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_memchr.c -L. -lft && ./a.out
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

	s = "Hello\0World";
	check("ft_memchr 'l'", ft_memchr(s, 'l', 11) == memchr(s, 'l', 11));
	check("ft_memchr after '\\0'", ft_memchr(s, 'W', 11) == memchr(s, 'W', 11));
	check("ft_memchr absent", ft_memchr(s, 'z', 11) == memchr(s, 'z', 11));
	check("ft_memchr n too short", ft_memchr(s, 'W', 5) == NULL);
	check("ft_memchr 'o' + 256",
		ft_memchr(s, 'o' + 256, 11) == memchr(s, 'o' + 256, 11));
	check("ft_memchr n = 0", ft_memchr(s, 'H', 0) == NULL);
	return (0);
}
*/
