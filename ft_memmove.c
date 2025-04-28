/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:34:34 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/28 14:18:23 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src)
		return (dest);
	while (n--)
	{
		if (!(dest < src && dest + n >= src) && !(src < dest && src + n >= dest))
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	return (dest);
}
