/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:52:02 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 15:56:12 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	s1[11] = "0123456789";
	char	s2[11] = "0123456789";

	ft_bzero(s1 + 4, 3);
	bzero(s2 + 4, 3);
	printf("ft_bzero : %s %s | bzero : %s %s\n", s1, s1 + 7, s2, s2 + 7);
	return (0);
}
*/
