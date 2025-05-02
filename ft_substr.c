/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:20:23 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/02 18:46:40 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = (char *)malloc(len);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len - 1);
	sub[len + 1] = '\0';
	return (sub);
}
