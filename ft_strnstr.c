/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <lupayet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:49:12 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/01 00:21:31 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		l_len;
	size_t		i;

	if (!(*little))
		return ((char *)big);
	l_len = ft_strlen(little);
	if (len < l_len)
		return (NULL);
	i = 0;
	while (big[i] && i <= len - l_len)
	{
		if (!ft_strncmp(&big[i], little, l_len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
