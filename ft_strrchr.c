/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:42 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/04 18:27:03 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t	s_len;

	s_len = (ssize_t)ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == c)
		{
			return ((char *)&s[s_len]);
		}
		s_len--;
	}
	if (c == '\0')
	{
		return ((char *)&s[s_len]);
	}
	return (NULL);
}
