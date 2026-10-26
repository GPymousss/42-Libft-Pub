/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:46:05 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:07:26 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_putstr_fd.c -L. -lft && ./a.out
*/
/*
#include <stdio.h>
#include <string.h>

static void	result(int ok)
{
	if (ok)
		printf("\033[32m[OK]\033[0m ");
	else
		printf("\033[31m[KO]\033[0m ");
}

static void	test(char *s)
{
	int		fds[2];
	char	buf[100];
	char	exp[100];
	ssize_t	n;

	strcpy(exp, s);
	if (pipe(fds) == -1)
		return ;
	ft_putstr_fd(s, fds[1]);
	close(fds[1]);
	n = read(fds[0], buf, 99);
	close(fds[0]);
	if (n < 0)
		n = 0;
	buf[n] = '\0';
	result(strcmp(buf, exp) == 0);
	printf("ft_putstr_fd(\"%s\")\n", s);
}

int	main(void)
{
	test("Hello 42");
	test("");
	test("a");
	return (0);
}
*/
