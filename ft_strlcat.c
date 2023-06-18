/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpincoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:37:46 by lpincoli          #+#    #+#             */
/*   Updated: 2022/10/05 18:45:53 by lpincoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[i] && i < size)
		i++;
	while (src[k] && (i + k + 1) < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	if (i < size)
		dest[i + k] = '\0';
	return (i + ft_strlen(src));
}
