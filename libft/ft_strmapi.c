/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:23:51 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 15:01:03 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*result;
	size_t	i;

	str = ft_strdup(s);
	if (!str)
		return (0);
	result = str;
	i = 0;
	while (str[i])
	{
		result[i] = (*f)(i, str[i]);
		i++;
	}
	return (result);
}

/*#include <stdio.h>
#include <stdlib.h>

char modifyCharByIndex(unsigned int index, char character) {
    return character + index;
}

int main() {
    char *s = "Hello";
    char *result = ft_strmapi(s, modifyCharByIndex);

    if (result == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    printf("Original String: %s\n", s);
    printf("Modified String: %s\n", result);

    free(result);

    return 0;
}*/