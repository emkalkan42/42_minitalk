/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:14:36 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 15:00:58 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <stdlib.h>

int main() {
    char *big = "Hello, World!";
    char *little = "World";
    size_t len = 13;

    char *result = ft_strnstr(big, little, len);

    if (result == NULL) {
        printf("Substring not found.\n");
        return 1;
    }

    printf("Original String: %s\n", big);
    printf("Substring: %s\n", little);
    printf("Result: %s\n", result);

    return 0;
}*/