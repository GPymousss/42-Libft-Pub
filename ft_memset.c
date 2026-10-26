/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:42:43 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 15:59:45 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	v;
	size_t			i;

	ptr = (unsigned char *)s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = v;
		i++;
	}
	return (s);
}
