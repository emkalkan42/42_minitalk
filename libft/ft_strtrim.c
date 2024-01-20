/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:43:47 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 15:00:53 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	beg;
	size_t	final;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	beg = 0;
	while (s1[beg] && ft_set(s1[beg], set))
		beg++;
	final = ft_strlen(s1);
	while (final > beg && ft_set(s1[final - 1], set))
		final--;
	str = (char *)malloc(sizeof(*s1) * (final - beg + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (beg < final)
		str[i++] = s1[beg++];
	str[i] = 0;
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>

static int ft_set(char c, const char *set) {
    while (*set) {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

int main() {
    char *s1 = "   Hello, World!   ";
    char *set = " ";

    char *result = ft_strtrim(s1, set);

    if (result == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    printf("Original String: \"%s\"\n", s1);
    printf("Set: \"%s\"\n", set);
    printf("Trimmed String: \"%s\"\n", result);

    free(result);

    return 0;
}
*/