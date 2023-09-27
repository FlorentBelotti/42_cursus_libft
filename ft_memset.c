/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:02:43 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/27 19:58:30 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include string.h

void	*ft_memset(void *m, int c, size_t n)
{
	unsigned char *ptr;
	size_t	i;

	i = 0;
	ptr = (unsigned char *)m;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (m);
}
