/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpincoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:59:36 by lpincoli          #+#    #+#             */
/*   Updated: 2022/10/09 19:05:26 by lpincoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	if (!dest && !src)
		return (dest);
	if (p1 <= p2)
	{
		while (n--)
			*p1++ = *p2++;
	}
	else
	{
		while (n--)
			p1[n] = p2[n];
	}
	return (dest);
}
