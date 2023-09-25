/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:06:38 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/25 15:12:02 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	i = 0;
	j = 0;
	s2_len = ft_strlen(s2);
	if (s2[0] == '\0')
	{
		return (s1);
	}
	while (s1[i] && i < len)
	{
		while (s1[i + j] == s2[j] && s2[j] && (i + j) < len)
		{
			j++;
		}
		if (j == s2_len)
		{
			return ((char *)&s1[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
