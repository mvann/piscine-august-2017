/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:53:07 by mvann             #+#    #+#             */
/*   Updated: 2017/08/15 17:26:28 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (i + dest_len < size - 1 && src[i] != '\0')
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}
