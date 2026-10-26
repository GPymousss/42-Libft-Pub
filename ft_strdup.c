/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:14:10 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 16:14:46 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s) + 1;
	copy = (char *)malloc(len);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s, len);
	return (copy);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strdup.c -L. -lft && ./a.out
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

int	main(void)
{
	char	*d;

	d = ft_strdup("Hello 42");
	check("ft_strdup \"Hello 42\"", d && strcmp(d, "Hello 42") == 0);
	free(d);
	d = ft_strdup("");
	check("ft_strdup \"\"", d && d[0] == '\0');
	free(d);
	return (0);
}
*/
