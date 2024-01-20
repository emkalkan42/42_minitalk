/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:37 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 23:08:58 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    char str1[15] = "Hello, world!";
    char str2[15] = "Hello, earth!";
    int result1 = ft_memcmp(str1, str2, 10);
    int result2 = memcmp(str1, str2, 10);

    printf("ft_memcmp: %d\n", result1);
    printf("memcmp: %d\n", result2);

    return 0;
}*/
