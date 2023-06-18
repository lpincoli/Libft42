/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpincoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:58:43 by lpincoli          #+#    #+#             */
/*   Updated: 2022/10/05 18:06:06 by lpincoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	int		len;

	len = ft_strlen(s);
	pt = (char *) s;
	pt += len;
	if (*pt == c)
		return (pt);
	else
		pt--;
	while (len > 0)
	{
		if (*pt == c)
			return (pt);
		len--;
		pt--;
	}
	return (0);
}
