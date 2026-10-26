/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:05:45 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:07:14 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	n;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	n = size - dlen - 1;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strlcat.c -L. -lft && ./a.out
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
	char	buf[20];
	size_t	r;

	strcpy(buf, "abc");
	r = ft_strlcat(buf, "def", 20);
	check("ft_strlcat enough room", r == 6 && strcmp(buf, "abcdef") == 0);
	strcpy(buf, "abc");
	r = ft_strlcat(buf, "defgh", 5);
	check("ft_strlcat truncate", r == 8 && strcmp(buf, "abcd") == 0);
	strcpy(buf, "abc");
	r = ft_strlcat(buf, "xyz", 2);
	check("ft_strlcat size < dst len", r == 5 && strcmp(buf, "abc") == 0);
	strcpy(buf, "abc");
	r = ft_strlcat(buf, "", 20);
	check("ft_strlcat empty src", r == 3 && strcmp(buf, "abc") == 0);
	return (0);
}
*/
