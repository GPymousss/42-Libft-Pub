/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:29:04 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 13:46:08 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_isdigit | isdigit\n");
	printf("'a' : %d | %d\n", ft_isdigit('a'), isdigit('a'));
	printf("'Z' : %d | %d\n", ft_isdigit('Z'), isdigit('Z'));
	printf("'5' : %d | %d\n", ft_isdigit('5'), isdigit('5'));
	printf("' ' : %d | %d\n", ft_isdigit(' '), isdigit(' '));
	printf("127 : %d | %d\n", ft_isdigit(127), isdigit(127));
	printf("200 : %d | %d\n", ft_isdigit(200), isdigit(200));
	return (0);
}
*/
