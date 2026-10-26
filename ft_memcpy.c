/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:42:45 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 16:48:53 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*strd;
	const unsigned char	*strs;
	size_t				i;

	strd = (unsigned char *)dest;
	strs = (const unsigned char *)src;
	if (!strd && !strs)
		return (NULL);
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_memcpy.c -L. -lft && ./a.out
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
	char	a[20];
	char	b[20];
	void	*r;

	memset(a, 0, 20);
	memset(b, 0, 20);
	r = ft_memcpy(a, "Hello 42", 9);
	memcpy(b, "Hello 42", 9);
	check("ft_memcpy \"Hello 42\"", memcmp(a, b, 20) == 0);
	check("ft_memcpy returns dest", r == a);
	ft_memcpy(a, "zzz", 0);
	check("ft_memcpy n = 0", memcmp(a, b, 20) == 0);
	check("ft_memcpy(NULL, NULL, 3)", ft_memcpy(NULL, NULL, 3) == NULL);
	return (0);
}
*/
