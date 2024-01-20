/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:40:53 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 23:43:18 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destt;
	const char	*srcc;

	destt = dest;
	srcc = src;
	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	while (n--)
		*destt++ = *srcc++;
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20];

    // Copy str1 to str2
    ft_memcpy(str2, str1, strlen(str1) + 1);

    // Print str2
    printf("%s\n", str2);

    return 0;
}*/