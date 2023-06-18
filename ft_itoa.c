/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpincoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:59:27 by lpincoli          #+#    #+#             */
/*   Updated: 2022/10/07 15:47:21 by lpincoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	j;
	long	i;
	long	nb;

	i = 0;
	nb = n;
	j = ft_numlen(n);
	str = malloc ((j + 1) * sizeof(char));
	if (!str)
		return (0);
	if (nb < 0)
	{
		str[0] = '-';
		i++;
		nb = -nb;
	}
	str[j--] = '\0';
	while (j >= i)
	{
		str[j--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
