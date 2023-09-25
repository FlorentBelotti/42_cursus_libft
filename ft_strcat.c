/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:41:37 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/24 10:45:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcat(char *dest, const char *src)
{
	int	i;
	int j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
