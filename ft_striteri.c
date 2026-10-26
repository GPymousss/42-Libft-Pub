/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:45:31 by guletill          #+#    #+#             */
/*   Updated: 2026/10/22 15:06:31 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
		s[i] = '\0';
	}
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_striteri.c -L. -lft && ./a.out
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

static void	check(const char *label, int ok)
{
	result(ok);
	printf("%s\n", label);
}

static void	upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	s[6];

	strcpy(s, "hello");
	ft_striteri(s, upper_even);
	check("ft_striteri(\"hello\") -> \"HeLlO\"", strcmp(s, "HeLlO") == 0);
	s[0] = '\0';
	ft_striteri(s, upper_even);
	check("ft_striteri(\"\") -> \"\"", s[0] == '\0');
	ft_striteri(NULL, upper_even);
	check("ft_striteri(NULL, f) no crash", 1);
	return (0);
}
*/
