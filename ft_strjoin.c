/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:55:36 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 17:55:55 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*result;
	char	*copy;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = (char *)malloc(s1len + s2len + 1);
	if (!result)
		return (NULL);
	copy = result;
	while (*s1)
		*copy++ = *s1++;
	while (*s2)
		*copy++ = *s2++;
	*copy = '\0';
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = ft_strjoin("Hello ", "42");
	printf("%s\n", s);
	free(s);
	return (0);
}
*/
