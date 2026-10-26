/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:45:47 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:07:08 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_putchar_fd.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>

static void	result(int ok)
{
	if (ok)
		printf("\033[32m[OK]\033[0m ");
	else
		printf("\033[31m[KO]\033[0m ");
}

static void	test(char c)
{
	int		fds[2];
	char	buf[2];

	if (pipe(fds) == -1)
		return ;
	ft_putchar_fd(c, fds[1]);
	close(fds[1]);
	result(read(fds[0], buf, 2) == 1 && buf[0] == c);
	printf("ft_putchar_fd('%c')\n", c);
	close(fds[0]);
}

int	main(void)
{
	test('a');
	test('Z');
	test('~');
	return (0);
}
*/
