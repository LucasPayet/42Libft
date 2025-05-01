/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:50:42 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/01 18:08:38 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <unistd.h>
char	*ft_itoa(int n)
{
	char	*nb;
	size_t	i;

	i = 0;
	nb = (char *)malloc(12);
	if (n == -2147483648)
	{
		nb = "-2147483648";
		return (nb);
	}
	if (n < 0)
	{
		nb[i++] = '-';
		n = -n;
	}
	while (n)
	{
		nb[i++] = (n % 10 + 48);
		n /= 10;
	}
	i = 0;
	if (nb[i] == '-')
		i = 1;
	ft_strrev(&nb[i]);
	return (nb);
}
