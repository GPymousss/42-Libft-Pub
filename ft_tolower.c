/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:28:43 by guletill          #+#    #+#             */
/*   Updated: 2026/10/19 17:30:54 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("     ft_tolower | tolower\n");
	printf("'a' : %c | %c\n", ft_tolower('a'), tolower('a'));
	printf("'Z' : %c | %c\n", ft_tolower('Z'), tolower('Z'));
	printf("'5' : %c | %c\n", ft_tolower('5'), tolower('5'));
	printf("'!' : %c | %c\n", ft_tolower('!'), tolower('!'));
	return (0);
}
*/
