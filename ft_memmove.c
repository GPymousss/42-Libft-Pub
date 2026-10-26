/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:53 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 13:33:11 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*strs;
	unsigned char		*strd;

	strs = (const unsigned char *)src;
	strd = (unsigned char *)dest;
	if (n == 0 || strd == strs)
		return (dest);
	if (strd < strs)
		while (n--)
			*strd++ = *strs++;
	else
	{
		strd += n;
		strs += n;
		while (n--)
			*(--strd) = *(--strs);
	}
	return (dest);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_memmove.c -L. -lft && ./a.out
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
	char	a[11];
	char	b[11];

	strcpy(a, "0123456789");
	strcpy(b, "0123456789");
	ft_memmove(a + 2, a, 5);
	memmove(b + 2, b, 5);
	check("ft_memmove overlap dest > src", memcmp(a, b, 11) == 0);
	strcpy(a, "0123456789");
	strcpy(b, "0123456789");
	ft_memmove(a, a + 2, 5);
	memmove(b, b + 2, 5);
	check("ft_memmove overlap dest < src", memcmp(a, b, 11) == 0);
	check("ft_memmove returns dest", ft_memmove(a, b, 3) == a);
	check("ft_memmove(NULL, NULL, 0)", ft_memmove(NULL, NULL, 0) == NULL);
	return (0);
}
*/
