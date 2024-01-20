/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:14:44 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/15 16:59:25 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main()
{
    char str[] = "hello world";
    char c = 'o';
    char *result;

    result = ft_strrchr(str, c);
    if (result)
        printf("'%c' found at position %ld\n", c, result - str);
    else
        printf("'%c' not found\n", c);

    return 0;
}*/
