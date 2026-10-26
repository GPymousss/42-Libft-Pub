/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:26:52 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 15:20:12 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strlen(\"Hello 42\") : %zu | strlen : %zu\n",
		ft_strlen("Hello 42"), strlen("Hello 42"));
	printf("ft_strlen(\"\") : %zu | strlen : %zu\n",
		ft_strlen(""), strlen(""));
	return (0);
}
*/
