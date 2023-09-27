/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:29:10 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/27 23:05:39 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	int		len_src;

	i = 0;
	len_src = ft_strlen(src);
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (len_src < len)
	{
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
