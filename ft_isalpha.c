/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:11:07 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 13:46:15 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_isalpha | isalpha\n");
	printf("'a' : %d | %d\n", ft_isalpha('a'), isalpha('a'));
	printf("'Z' : %d | %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("'5' : %d | %d\n", ft_isalpha('5'), isalpha('5'));
	printf("' ' : %d | %d\n", ft_isalpha(' '), isalpha(' '));
	printf("127 : %d | %d\n", ft_isalpha(127), isalpha(127));
	printf("200 : %d | %d\n", ft_isalpha(200), isalpha(200));
	return (0);
}
*/
