/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:51:27 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 21:46:01 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
    char str[50] = "Hello World!";
    size_t len = strlen(str);

    printf("Before bzero: %s\n", str);
    ft_bzero(str, len);
    printf("After bzero: %s\n", str);

    return 0;
}*/