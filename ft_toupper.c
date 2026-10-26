/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:26:24 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:30:58 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_toupper | toupper\n");
	printf("'a' : %c | %c\n", ft_toupper('a'), toupper('a'));
	printf("'Z' : %c | %c\n", ft_toupper('Z'), toupper('Z'));
	printf("'5' : %c | %c\n", ft_toupper('5'), toupper('5'));
	printf("'!' : %c | %c\n", ft_toupper('!'), toupper('!'));
	return (0);
}
*/
