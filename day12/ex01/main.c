/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 17:50:21 by mvann             #+#    #+#             */
/*   Updated: 2017/08/24 21:40:47 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_stdi_to_stdo(char *buf)
{
	int ret;

	ret = read(0, buf, BUF_SIZE);
	while (ret > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(0, buf, BUF_SIZE);
	}
}

void	ft_puterror(int n, char *s)
{
	if (n == 2)
	{
		ft_putstr("cat: ");
		ft_putstr(s);
		ft_putstr(": No such file or directory");
	}
	if (
	ft_putnbr(errno);
	ft_putstr(":err, \n");
}

void	ft_putall(int ac, char **av, char *buf)
{
	int i;
	int fd;
	int ret;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '-' && av[i][1] == '\0')
			ft_stdi_to_stdo(buf);
		else
		{
			fd = open(av[i], O_RDONLY);
			ft_putnbr(fd);
			ft_putstr(":fd, \n");
			if (fd != -1)
			{
				ret = read(fd, buf, BUF_SIZE);
				if (ret == -1)
					ft_puterror(errno, av[i]);
				ft_putnbr(ret);
				ft_putstr(":ret, \n");
				buf[ret] = '\0';
				ft_putstr(buf);
				close(fd);
			}
			else
				ft_puterror(errno, av[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		ft_stdi_to_stdo(buf);
	}
	else
	{
		ft_putall(argc, argv, buf);
	}
	return (0);
}
