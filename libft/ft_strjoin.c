/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:10:19 by pbourlet          #+#    #+#             */
/*   Updated: 2016/12/08 17:26:21 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*frais;
	int		i;
	int		y;
	int		len;

	y = 0;
	if ((i = 0) && ft_strcmp(s1, "") == 0)
		return ((char *)s1);
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(frais = ft_strnew(len)))
		return (NULL);
	while (s1[i])
	{
		frais[i] = s1[i];
		i++;
	}
	while (s2[y])
		frais[i++] = s2[y++];
	return (frais);
}
