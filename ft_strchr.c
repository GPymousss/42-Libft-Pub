/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:33:45 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:35:08 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strchr('l') : %s | strchr : %s\n",
		ft_strchr("Hello 42", 'l'), strchr("Hello 42", 'l'));
	printf("ft_strchr('z') : %p | strchr : %p\n",
		ft_strchr("Hello 42", 'z'), strchr("Hello 42", 'z'));
	return (0);
}
*/
