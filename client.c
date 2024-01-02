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

// void	args_check(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	if (argc != 3)
// 		while (argv[1][i])
// 			if (!ft_isdigit(argv[1][i++]))
// 				if (*argv[2] == 0)
// 					return ;
// }

void	send_msg(pid_t sv_pid, char *msg)
{
	unsigned char	c;
	int				nbr_bits;

	while (*msg)
	{
		c = *msg;
		nbr_bits = 8;
		while (nbr_bits--)
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
	int	i;

	i = 0;
	if (signum != SIGUSR2)
		i++;
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
	
	if (argc)
	//args_check(argc, argv);
	sv_pid = ft_atoi(argv[1]);
	config_signals();
	send_msg(sv_pid, argv[2]);
	return (EXIT_SUCCESS);
}
