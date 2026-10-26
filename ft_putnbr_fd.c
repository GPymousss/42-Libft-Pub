/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:46:41 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:07:43 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = 147483648;
		}
		else
			n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_putnbr_fd.c -L. -lft && ./a.out
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

static void	test(int nb)
{
	int		fds[2];
	char	buf[100];
	char	exp[100];
	ssize_t	n;

	sprintf(exp, "%d", nb);
	if (pipe(fds) == -1)
		return ;
	ft_putnbr_fd(nb, fds[1]);
	close(fds[1]);
	n = read(fds[0], buf, 99);
	close(fds[0]);
	if (n < 0)
		n = 0;
	buf[n] = '\0';
	result(strcmp(buf, exp) == 0);
	printf("ft_putnbr_fd(%d)\n", nb);
}

int	main(void)
{
	test(0);
	test(42);
	test(-42);
	test(10);
	test(-7);
	test(INT_MAX);
	test(INT_MIN);
	return (0);
}
*/
