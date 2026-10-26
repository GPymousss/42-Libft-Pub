/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:58:15 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 15:02:48 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	r;
	int	s;
	int	i;

	r = 0;
	s = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 + (nptr[i] - '0');
		i++;
	}
	return (r * s);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("ft_atoi : %d | atoi : %d\n", ft_atoi("42"), atoi("42"));
	printf("ft_atoi : %d | atoi : %d\n", ft_atoi("  -42"), atoi("  -42"));
	printf("ft_atoi : %d | atoi : %d\n", ft_atoi("+17ab"), atoi("+17ab"));
	printf("ft_atoi : %d | atoi : %d\n", ft_atoi("--5"), atoi("--5"));
	return (0);
}
*/
