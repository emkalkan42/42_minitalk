/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:02:22 by emkalkan          #+#    #+#             */
/*   Updated: 2023/06/07 23:13:07 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int main(void)
{
    char c = '4';

    if (ft_isdigit(c))
    {
        printf("%c is a digit.\n", c);
    }
    else
    {
        printf("%c is not a digit.\n", c);
    }

    return 0;
}*/
