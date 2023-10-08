/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:43:00 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/08 15:57:11 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	while (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar(n % 10 + '0', fd);
	}
}
