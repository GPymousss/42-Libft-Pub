/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:30:26 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 13:46:29 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
		|| (ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_isalnum | isalnum\n");
	printf("'a' : %d | %d\n", ft_isalnum('a'), isalnum('a'));
	printf("'Z' : %d | %d\n", ft_isalnum('Z'), isalnum('Z'));
	printf("'5' : %d | %d\n", ft_isalnum('5'), isalnum('5'));
	printf("' ' : %d | %d\n", ft_isalnum(' '), isalnum(' '));
	printf("127 : %d | %d\n", ft_isalnum(127), isalnum(127));
	printf("200 : %d | %d\n", ft_isalnum(200), isalnum(200));
	return (0);
}
*/
