/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:08:34 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 23:55:58 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getlen(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_getlen(nb);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	str[len] = '\0';
	len--;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb != 0)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = -12345;

    char* str = ft_itoa(n);
    if (str == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    printf("Integer: %d\n", n);
    printf("String: %s\n", str);

    free(str);

    return 0;
}*/