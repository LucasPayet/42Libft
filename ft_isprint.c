/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:28:39 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/25 13:36:33 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

#include <stdio.h>
int	main(int ac, char *av[])
{
	(void)ac;
	int	c;

	c = ft_isprint((unsigned char)*av[1]);
	if (c)
		printf("is || %d\n", c);
	else
		printf("isnot || %d\n", (unsigned char)*av[1]);
	return (0);
}
