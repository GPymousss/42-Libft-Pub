/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:45:31 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:06:31 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
		s[i] = '\0';
	}
}

/*
#include <stdio.h>

void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	s[6] = "hello";

	ft_striteri(s, to_upper);
	printf("%s\n", s);
	return (0);
}
*/
