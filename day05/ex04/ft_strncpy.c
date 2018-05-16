/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:30:43 by mvann             #+#    #+#             */
/*   Updated: 2017/08/15 16:26:40 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				src_ended;

	src_ended = 0;
	i = 0;
	while (i < n)
	{
		if (src_ended)
			dest[i] = 0;
		else
		{
			if (src[i] == '\0')
			{
				src_ended = 1;
				dest[i] = '\0';
			}
			else
				dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
