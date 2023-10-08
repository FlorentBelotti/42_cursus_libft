/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:14:25 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/08 16:00:50 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

void	free_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	*create_substring_and_advance(char **sub_start, char c)
{
	char	*sub_end;
	char	*word;

	if (**sub_start != c)
	{
		sub_end = ft_strchr(*sub_start, c);
		if (!sub_end)
			sub_end = ft_strchr(*sub_start, '\0');

		word = ft_substr(*sub_start, 0, sub_end - *sub_start);

		if (*sub_end)
			*sub_start = sub_end + 1;
		else
			*sub_start = sub_end;

		return (word);
	}
	(*sub_start)++;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**sub_array;
	char	*sub_start;
	int		i;

	sub_array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s)
		return (NULL);
	i = 0;
	sub_start = (char *)s;
	while (*sub_start)
	{
		if ((sub_array[i] = create_substring_and_advance(&sub_start, c)))
			i++;
		else if (!sub_array[i])
		{
			free_array(sub_array, i);
			return (NULL);
		}
	}
	sub_array[i] = NULL;
	return (sub_array);
}
