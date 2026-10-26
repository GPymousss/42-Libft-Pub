/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:02:06 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:39:03 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	n;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	n = size - 1;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (src_len);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strlcpy.c -L. -lft && ./a.out
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
	char	buf[10];
	size_t	r;

	r = ft_strlcpy(buf, "Hello", 10);
	check("ft_strlcpy size 10", r == 5 && strcmp(buf, "Hello") == 0);
	r = ft_strlcpy(buf, "Hello", 3);
	check("ft_strlcpy size 3 (truncate)", r == 5 && strcmp(buf, "He") == 0);
	strcpy(buf, "xyz");
	r = ft_strlcpy(buf, "Hello", 0);
	check("ft_strlcpy size 0", r == 5 && strcmp(buf, "xyz") == 0);
	r = ft_strlcpy(buf, "", 10);
	check("ft_strlcpy empty src", r == 0 && buf[0] == '\0');
	return (0);
}
*/
