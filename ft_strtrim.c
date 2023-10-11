/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:39:26 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/11 12:05:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s, char *set)
{
	size_t	i;
	size_t	s_len;
	size_t	trim_len;
	char	*trim;

	if (!s || !set)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	while (s_len > i && ft_strchr(set, s[s_len - 1]))
		s_len--;
	trim_len = s_len - i;
	trim = (char *)malloc(trim_len + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, &s[i], trim_len);
	trim[trim_len] = '\0';
	return (trim);
}
