/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:45:34 by emkalkan          #+#    #+#             */
/*   Updated: 2024/01/07 16:50:26 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to output a string to the standard output
// Check if str is not NULL before entering the loop
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

// Function to print a string and return the length of 
// the printed string
// Handle the case where the input string is NULL
// Use strlen to find the length of the string
int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}

// Function to print an integer and return the length 
// of the printed string
// Convert the integer to a string using ft_itoa
// Print the string representation of the integer and get the length
// Free the allocated memory for the string
int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

// Function to print a percent symbol ("%%") and return 1
int	ft_printpercent(void)
{
	write(1, "%%", 1);
	return (1);
}
