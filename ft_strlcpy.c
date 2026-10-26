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
#include <stdio.h>

int	main(void)
{
	char	dst[10];

	printf("retour : %zu\n", ft_strlcpy(dst, "Hello 42", 10));
	printf("dst    : %s\n", dst);
	printf("retour : %zu\n", ft_strlcpy(dst, "Hello 42", 4));
	printf("dst    : %s\n", dst);
	return (0);
}
*/
