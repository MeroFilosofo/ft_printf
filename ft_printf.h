/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivromero <ivromero@student.45urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:22:34 by ivromero          #+#    #+#             */
/*   Updated: 2023/10/17 16:55:38 by ivromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_putcharcnt(char c, int *count);
void	ft_putstrcnt(char *s, int *count);
void	ft_putnbrcnt(long n, int *count);
void	ft_puthexcnt(unsigned long int n, int ucase, int prefix, int *count);

#endif