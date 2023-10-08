/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:07:27 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/03 10:27:51 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	mem = malloc(num * size);
	if (!mem)
	{
		return (NULL);
	}
	ft_bzero (mem, num * size);
	return (mem);
}
