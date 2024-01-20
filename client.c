/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:17:23 by emkalkan          #+#    #+#             */
/*   Updated: 2024/01/01 16:17:23 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	send_msg(pid_t sv_pid, char *msg)
{
	unsigned char	c;
	int				count_bits;

	if (!msg)
		return ;
	while (*msg)
	{
		c = *msg;
		count_bits = 8;
		while (count_bits--)
		{
			if (c & 0b10000000)
				kill(sv_pid, SIGUSR1);
			else
				kill(sv_pid, SIGUSR2);
			sleep(1);
			c <<= 1;
		}
		msg++;
	}
}

void	sig_handler(int signum)
{
	(void)signum;
}

void	config_signals(void)
{
	struct sigaction	sa_newsig;

	sa_newsig.sa_handler = &sig_handler;
	sa_newsig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa_newsig, NULL) == -1)
		return ;
	if (sigaction(SIGUSR2, &sa_newsig, NULL) == -1)
		return ;
}

int	main(int argc, char **argv)
{
	pid_t		sv_pid;

	if (argc < 2 || argc > 3)
		return (1);
	sv_pid = ft_atoi(argv[1]);
	config_signals();
	send_msg(sv_pid, argv[2]);
	if (argc)
		return (EXIT_SUCCESS);
}
