/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:12:21 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 16:13:01 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_calloc.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>
#include <stdint.h>

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
	int		*p;
	size_t	i;
	int		ok;

	p = ft_calloc(10, sizeof(int));
	ok = (p != NULL);
	i = 0;
	while (ok && i < 10)
	{
		if (p[i] != 0)
			ok = 0;
		i++;
	}
	check("ft_calloc(10, sizeof(int)) zeroed", ok);
	free(p);
	p = ft_calloc(0, 0);
	check("ft_calloc(0, 0) not NULL", p != NULL);
	free(p);
	p = ft_calloc(SIZE_MAX / 2 + 2, 2);
	check("ft_calloc overflow returns NULL", p == NULL);
	free(p);
	return (0);
}
*/
