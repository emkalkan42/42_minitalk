/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:44:29 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 23:45:36 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*#include <stdio.h>

int ft_isalpha(int c);

int main(void)
{
    printf("%d\n", ft_isalpha('a')); // should print 1
    printf("%d\n", ft_isalpha('Z')); // should print 1
    printf("%d\n", ft_isalpha('3')); // should print 0
    printf("%d\n", ft_isalpha('$')); // should print 0
    return 0;
}*/