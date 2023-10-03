/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:42 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/03 18:07:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
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
