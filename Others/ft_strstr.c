/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:57:21 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/28 16:37:44 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int	s2_len;

	i = 0;
	j = 0;
	s2_len = ft_strlen(s2);
	if (s2[0] == '\0')
	{
		return (s1);
	}
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && s2[j])
		{
			j++;
		}
		if (j == s2_len)
		{
			return (&s1[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
