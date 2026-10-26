/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guletill <guletill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:55:43 by guletill          #+#    #+#             */
/*   Updated: 2026/10/20 14:56:02 by guletill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && (i + j) < len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
** Test main: uncomment the block below, then run:
** make && cc -Wall -Wextra -Werror ft_strnstr.c -L. -lft && ./a.out
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

static void	check(const char *label, int ok)
{
	result(ok);
	printf("%s\n", label);
}

int	main(void)
{
	const char	*h;

	h = "Hello 42 Paris";
	check("ft_strnstr \"42\" len 14", ft_strnstr(h, "42", 14) == h + 6);
	check("ft_strnstr \"42\" len 7", ft_strnstr(h, "42", 7) == NULL);
	check("ft_strnstr \"42\" len 8", ft_strnstr(h, "42", 8) == h + 6);
	check("ft_strnstr empty needle", ft_strnstr(h, "", 0) == h);
	check("ft_strnstr \"Paris\"", ft_strnstr(h, "Paris", 14) == h + 9);
	check("ft_strnstr absent", ft_strnstr(h, "xyz", 14) == NULL);
	check("ft_strnstr needle > hay", ft_strnstr("ab", "abc", 10) == NULL);
	return (0);
}
*/
