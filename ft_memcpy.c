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
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[20] = "..........";
	char	s2[20] = "..........";

	ft_memcpy(s1, "Hello", 5);
	memcpy(s2, "Hello", 5);
	printf("ft_memcpy : %s | memcpy : %s\n", s1, s2);
	return (0);
}
*/
