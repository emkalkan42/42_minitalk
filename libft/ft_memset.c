/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:32:41 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/09 15:17:59 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*dest;

	dest = s;
	while (n--)
	{
		*((char *) s) = (unsigned char) c;
		s++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50] = "Hello, World!";

    printf("Before memset(): %s\n", str);

    ft_memset(str, '*', 6);

    printf("After memset(): %s\n", str);

    return 0;
}*/