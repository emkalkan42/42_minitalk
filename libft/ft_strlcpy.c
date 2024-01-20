/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:50:48 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/13 19:38:30 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, world!";
    char dst[20];
    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("src: \"%s\"\n", src);
    printf("dst: \"%s\"\n", dst);
    printf("len: %zu\n", len);

    return 0;
}*/