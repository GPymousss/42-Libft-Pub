/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:34:15 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 13:57:41 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (char)c)
			r = (char *)s;
		s++;
	}
	if (*s == (char)c)
		r = (char *)s;
	return (r);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strrchr('l') : %s | strrchr : %s\n",
		ft_strrchr("Hello 42", 'l'), strrchr("Hello 42", 'l'));
	printf("ft_strrchr('z') : %p | strrchr : %p\n",
		ft_strrchr("Hello 42", 'z'), strrchr("Hello 42", 'z'));
	return (0);
}
*/
