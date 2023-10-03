/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:00:42 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/03 16:11:05 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*psrc;
	unsigned char	*pdest;
	size_t			i;

	i = 0;
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	while (i < count)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
