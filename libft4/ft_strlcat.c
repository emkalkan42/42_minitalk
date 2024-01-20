/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:14:26 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/05 18:50:54 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	offset;
	size_t	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	i = 0;
	if (d_len >= destsize)
		return (s_len + destsize);
	if (d_len < destsize - 1 && destsize > 0)
	{
		while (*(src + i) != '\0' && (d_len + 1 < destsize))
		{
			*(dest + offset) = *(src + i);
			offset++;
			i++;
			if (offset == (destsize - 1))
				break ;
		}
	}
	*(dest + offset) = '\0';
	return (d_len + s_len);
}

/*#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char dst[10] = "hello";
	char *src = "world";
	size_t size = 10;
	size_t ret;

	ret = ft_strlcat(dst, src, size);
	printf("dst: %s\n", dst);
	printf("ret: %zu\n", ret);
	return (0);
}
*/
