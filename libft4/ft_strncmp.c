/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:08:23 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 23:49:22 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hello, world!";
    char *s3 = "World";
    int n = 5;

    printf("Comparing s1 and s2 for %d 
	characters: %d\n", n, ft_strncmp(s1, s2, n));
    printf("Comparing s2 and s3 for %d 
	characters: %d\n", n, ft_strncmp(s2, s3, n));
    printf("Comparing s3 and s1 for %d 
	characters: %d\n", n, ft_strncmp(s3, s1, n));

    return 0;
}*/