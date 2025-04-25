/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:48:36 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/25 11:58:11 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
/*
#include <stdio.h>
int	main(int ac, char *av[])
{
	(void)ac;
	int	c;

	c = ft_isdigit((unsigned char)*av[1]);
	if (c)
		printf("isalpha || %d\n", c);
	else
		printf("isnotalpha || %d\n", (unsigned char)*av[1]);
	return (0);
}*/
