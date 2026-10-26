/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:45:00 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:00:37 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_itoa(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_number_itoa(char *s, int n)
{
	if (n < 0)
	{
		*s++ = '-';
		n = -n;
	}
	if (n >= 10)
	{
		ft_number_itoa(s, n / 10);
		while (*s)
			s++;
	}
	*s = (n % 10) + '0';
	*(s + 1) = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_strlen_itoa(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_number_itoa(str, n);
	return (str);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_itoa.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>
#include <string.h>
#include <limits.h>

static void	result(int ok)
{
	if (ok)
		printf("\033[32m[OK]\033[0m ");
	else
		printf("\033[31m[KO]\033[0m ");
}

static void	test(int n)
{
	char	exp[20];
	char	*r;

	sprintf(exp, "%d", n);
	r = ft_itoa(n);
	result(r && strcmp(r, exp) == 0);
	printf("ft_itoa(%d) -> \"%s\"\n", n, r);
	free(r);
}

int	main(void)
{
	test(0);
	test(7);
	test(42);
	test(-42);
	test(-1);
	test(10);
	test(-100);
	test(INT_MAX);
	test(INT_MIN);
	return (0);
}
*/
