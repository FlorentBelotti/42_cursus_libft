/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:46:29 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/27 23:04:15 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncat(char *dest, const char *src, size_t n)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
