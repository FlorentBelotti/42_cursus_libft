/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:14:25 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/05 23:56:28 by fbelotti         ###   ########.fr       */
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
		while (s[i] == c && s[i]) //skip separators until word is found
			i++;
		if (s[i] != c && s[i]) //if word is find
			count++;
		while (s[i] != c && s[i]) //skip word
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**sub_array; //array of separates subs
	char	*sub_start;
	char	*sub_end;
	int	i;

	i = 0;
	sub_start = (char *)s;
	if (!s)
		return (NULL);
	sub_array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1)); //fill array with necessary adress
	if (!sub_array)
		return (NULL);
	while (*sub_start) //while start isnt the end of the string
	{
		sub_end = ft_strchr(sub_start, c); //search for next separator
		if (!sub_end)
			sub_end = ft_strchr(sub_start, '\0'); //ifno, start = \'0'
		if (sub_end > sub_start) //word existing
		{
			sub_array[i] = ft_substr(sub_start, 0, sub_end - sub_start); //fill array with word begining at start position 0 with a end - start length
			if (!sub_array[i])
			{
				while (i > 0) //free every substring
					free(sub_array[--i]);
				free(sub_array); //free the entire array
				return (NULL);
			}
			i++;
		}
		if (*sub_end) //we found c
			sub_start = sub_end + 1; //we skip separator
		else //si end = '\0'
			sub_start = sub_end; //end of the string
	}
	sub_array[i] = NULL;
	return (sub_array);
}
