/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:55:09 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 15:59:15 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= ' ' && ch <= '~')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_isprint | isprint\n");
	printf("'a' : %d | %d\n", ft_isprint('a'), isprint('a'));
	printf("'Z' : %d | %d\n", ft_isprint('Z'), isprint('Z'));
	printf("'5' : %d | %d\n", ft_isprint('5'), isprint('5'));
	printf("' ' : %d | %d\n", ft_isprint(' '), isprint(' '));
	printf("127 : %d | %d\n", ft_isprint(127), isprint(127));
	printf("200 : %d | %d\n", ft_isprint(200), isprint(200));
	return (0);
}
*/
