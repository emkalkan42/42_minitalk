/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:11 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/17 21:47:30 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(size * count);
	if (!ret)
		return (0);
	ft_bzero(ret, size * count);
	return (ret);
}

/*int		main(void)
{
	char	*str;
	int		*arr;

	str = (char *)ft_calloc(10, sizeof(char));
	arr = (int *)ft_calloc(5, sizeof(int));

	if (!str || !arr)
		return (1);

	// Output the allocated memory
	for (int i = 0; i < 10; i++)
		printf("%c ", str[i]);
	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	free(str);
	free(arr);

	return (0);
}*/
