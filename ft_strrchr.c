/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:36:12 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/02 17:41:14 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *l;

	l = NULL;
	while (*s)
	{
		if (*s == c)
			l = (char *)s;
		s++;
	}
	if (l == NULL && (char)c == '\0')
		return ((char *)s);
	return (l);
}

