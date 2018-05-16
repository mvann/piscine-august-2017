/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:19:38 by mvann             #+#    #+#             */
/*   Updated: 2017/08/24 17:38:35 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
			close(fd);
		}
	}
	return (0);
}
