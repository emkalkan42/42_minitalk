/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:22:18 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 15:07:57 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	wordcount;
	int	i;

	wordcount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wordcount++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (wordcount);
}

static size_t	word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static char	**take_words(char const *s, char c, char **output)
{
	int		i;
	size_t	wordlen;
	int		arri;

	i = 0;
	arri = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wordlen = word_len(s + i, c);
			output[arri] = malloc(wordlen + 1);
			if (output[arri] == 0)
				return (NULL);
			ft_strlcpy(output[arri], s + i, wordlen + 1);
			i += wordlen;
			arri++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (output);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	int		wordcount;

	wordcount = count_words(s, c);
	output = malloc(sizeof(char *) * (wordcount + 1));
	if (output == 0)
		return (NULL);
	output[wordcount] = 0;
	output = take_words(s, c, output);
	return (output);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {

// 	if (argc != 2)
// 		return (1);
// 	char **array = ft_split(argv[1], '\0');
// 	while (*array != 0)
// 	{
// 		printf("%s\n", *array);
// 		array++;
// 	}
// 	return (0);
// }