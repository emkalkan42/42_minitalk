/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:28:31 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 14:56:28 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>

// Include the ft_striteri implementation here

// Example function to print the index and character
void printIndexAndChar(unsigned int index, char* character) {
    printf("Index: %u, Character: %c\n", index, *character);
}

int main() {
    char str[] = "Hello, World!";

    printf("String: %s\n", str);
    printf("Applying ft_striteri:\n");
    ft_striteri(str, printIndexAndChar);

    return 0;
}
*/