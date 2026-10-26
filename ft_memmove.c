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
