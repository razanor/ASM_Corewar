/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:15:55 by nrepak            #+#    #+#             */
/*   Updated: 2018/06/26 11:56:20 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static int	usage_error(char *str, char *name)
{
	write (2, str, ft_strlen(str));
	if (name)
		write (2, name, ft_strlen(name));
	write(2, "\n", 1);
	return (USAGE_ERROR);
}


static int	usage_check(int ac, char **av, int fd)
{
	int len;

	if (ac < 2)
		return (usage_error(USAGE, NULL));
	if (fd == -1)
		return (usage_error(USAGE1, av[1]));
	len = ft_strlen(av[1]);
	if (!(av[1][len - 1] == 's' && av[1][len - 2] == '.'))
		return (usage_error(USAGE, NULL));
	return (0);
}

int			main(int ac, char **av)
{
	int fd; 
	t_name_comm info;

	fd = open(av[1], O_RDONLY);
	if (usage_check(ac, av, fd) == USAGE_ERROR)
		return (0);
	info = (t_name_comm){NULL, NULL, 0};
	if (file_check(fd, &info) == USAGE_ERROR)
		return (0);
	//asm
	ft_putstr("NO ERROR YET\n");
	return (0);
}
