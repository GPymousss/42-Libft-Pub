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
#include <stdio.h>

int	main(void)
{
	char	dst[20] = "Hello";

	printf("retour : %zu\n", ft_strlcat(dst, " 42", 20));
	printf("dst    : %s\n", dst);
	printf("retour : %zu\n", ft_strlcat(dst, " Paris", 10));
	printf("dst    : %s\n", dst);
	return (0);
}
*/
