/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:28:34 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 15:02:46 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (0);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
/*#include <stdio.h>
#include <stdlib.h>

// Include the ft_substr implementation here

int main() {
    char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(s, start, len);

    if (result == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    printf("Original String: \"%s\"\n", s);
    printf("Start Index: %u\n", start);
    printf("Length: %zu\n", len);
    printf("Substring: \"%s\"\n", result);

    free(result);  // Remember to free the allocated memory

    return 0;
}*/