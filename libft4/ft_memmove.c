/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:48 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 23:48:25 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		while (n != 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "hello world";
    char str2[] = "hey";
    
    printf("Before ft_memmove: str1 = %s, str2 = %s\n", str1, str2);

    // Move "world" from str1 to str2
    ft_memmove(str2, str1 + 6, 5);

    printf("After ft_memmove: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}*/
