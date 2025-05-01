/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:13:57 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/01 16:32:49 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	
	size_t	end;
	size_t	start;
	size_t	m;
	char	*trim;

	end = ft_strlen(s1) - 1;
	start = 0;
	m = end / 2;
	while (start < m && ft_inset(s1[start], set))
		start++;
	while (end >= m && ft_inset(s1[end], set))
		end--;
	trim = (char *)malloc(end - start + 2);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], end - start + 2);
	return (trim);
}
