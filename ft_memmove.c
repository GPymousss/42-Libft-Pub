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
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[11] = "0123456789";
	char	s2[11] = "0123456789";

	ft_memmove(s1 + 2, s1, 5);
	memmove(s2 + 2, s2, 5);
	printf("ft_memmove : %s | memmove : %s\n", s1, s2);
	return (0);
}
*/
