/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:22:13 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/25 13:26:24 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(int ac, char *av[])
{
	(void)ac;
	int	c;

	c = ft_isascii((unsigned char)*av[1]);
	if (c)
		printf("is || %d\n", c);
	else
		printf("isnot || %d\n", (unsigned char)*av[1]);
	return (0);
}
