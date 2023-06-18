/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpincoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:23:57 by lpincoli          #+#    #+#             */
/*   Updated: 2022/10/14 22:36:20 by lpincoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"

void	ft_putunsigned(unsigned int nb, int fd, int *count);
void	ft_print_hex(unsigned int currentArg, int up_case, int fd, int *count);
void	ft_print_addr(unsigned long currentArg, int fd, int *count, int check);
int	ft_printf(const char *str, ...);

#endif /* FT_PRINTF_H */
