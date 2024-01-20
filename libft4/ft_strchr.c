/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:58 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/13 15:46:03 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (!*s++)
		{
			if (s == 0)
			{
				return ((char *) s);
			}
			else
			{
				return (0);
			}
		}
	}
	return ((char *) s);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    //char str[] = "teste";
    char *result1 = ft_strchr("teste", '\0');
    char *result2 = strchr("teste", '\0');

    printf("My result: %s\n", result1);
    printf("Standard result: %s\n", result2);

    return 0;
}
*/
