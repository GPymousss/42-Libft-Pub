/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:58:59 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 16:47:42 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strncmp : %d | strncmp : %d\n",
		ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("ft_strncmp : %d | strncmp : %d\n",
		ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	printf("ft_strncmp : %d | strncmp : %d\n",
		ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));
	return (0);
}
*/
