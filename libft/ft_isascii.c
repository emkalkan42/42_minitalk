/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:17:36 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/19 13:08:40 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>

int ft_isascii(int c);

int main(void)
{
    int c;
    
    // Test some valid ASCII values
    for (c = 0; c < 128; c++)
    {
        if (ft_isascii(c))
            printf("%d is an ASCII character.\n", c);
    }
    
    // Test some non-ASCII values
    for (c = 128; c < 256; c++)
    {
        if (ft_isascii(c))
            printf("%d is an ASCII character (incorrect).\n", c);
    }
    
    return 0;
}*/