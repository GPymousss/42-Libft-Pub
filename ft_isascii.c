/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:47:36 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 13:54:19 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_isascii | isascii\n");
	printf("'a' : %d | %d\n", ft_isascii('a'), isascii('a'));
	printf("'Z' : %d | %d\n", ft_isascii('Z'), isascii('Z'));
	printf("'5' : %d | %d\n", ft_isascii('5'), isascii('5'));
	printf("' ' : %d | %d\n", ft_isascii(' '), isascii(' '));
	printf("127 : %d | %d\n", ft_isascii(127), isascii(127));
	printf("200 : %d | %d\n", ft_isascii(200), isascii(200));
	return (0);
}
*/
