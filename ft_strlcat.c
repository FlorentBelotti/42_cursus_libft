/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:59:55 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/24 17:22:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	total_len;
	size_t	i;

	j = ft_strlen(dest);
	total_len = ft_strlen(src) + j;
	i = 0;
	if (size <= j)
		return (size + ft_strlen(src));
	while (src[i] && (j + 1) < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (total_len);
}
