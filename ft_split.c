/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:17:54 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/05 00:56:52 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	count;
	int	i;
	count = 0;
	i = 0;

	if (*str != c && *str != '\0')
		count++;
	while (str[i])
	{
		if (str[i] != c  && str[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static void	ft_free_list(char **plist)
{
	while (*plist)
	{
		free(*plist);
		plist++;
	}
}

#include <stdio.h>
char **ft_split(char const *s, char c)
{
	int		words;
	char	**list;
	size_t	i;
	size_t	j;
	size_t	temp;

	words = count_word(s, c);
	i = 0;
	j = 0;
	temp = 0;
	printf("%d\n", words);
	list = (char **)malloc((words + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	list[words] = NULL;
	while (s[i])
	{
		if (s[i] == c)
			temp = i + 1;
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			list[j] = ft_substr(s, temp, (i + 1 - temp));
			if (!list[j])
			{
				ft_free_list(list);
				return (NULL);
			}
			j++;
		}
		i++;
	}

	return (list);
}
