/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:40:43 by emkalkan          #+#    #+#             */
/*   Updated: 2023/10/25 18:40:43 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function to calculate the length
of the hexadecimal representation
of a given uintptr_t*/

int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

/*
Recursive function to print
the hexadecimal
representation of a given
uintptr_t
*/

/*Recursive call to print
the hexadecimal representation
Print the digit for values 0 to 9
Print the corresponding hexadecimal
letter for values 10 to 15*/
void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

/*
Function to print the hexadecimal representation
of a given uintptr_t
and return its length
Print '0x' for hexadecimal representation
Special case: print '0' for input value of 0 
Call the recursive function to print
hexadecimal and return its length*/
int	ft_print_ptr(unsigned long long int ptr)
{
	int		print_length;

	print_length = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		print_length += write(1, "0x", 2);
		ft_put_ptr((uintptr_t)ptr);
		print_length += ft_ptr_len((uintptr_t)ptr);
	}
	return (print_length);
}
