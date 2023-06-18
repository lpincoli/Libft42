/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpincoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:44:37 by lpincoli          #+#    #+#             */
/*   Updated: 2022/10/07 15:23:47 by lpincoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	b = (char *) big;
	i = 0;
	if (little[i] == '\0' || little == NULL)
		return (b);
	if (len == 0)
		return (0);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if (b[i + j] == little[j])
				j++;
			else
				break ;
		}
		if (little[j] == 0)
			return (&b[i]);
		i++;
	}
	return (0);
}
