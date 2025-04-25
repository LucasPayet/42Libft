/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:22:13 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/25 13:08:09 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (c);
	return (0);
}

#include <stdio.h>
int	main(int ac, char *av[])
{
	int	c;

	(void)ac;
	c = ft_isalnum((unsigned char)*av[1]);
	if (c)
		printf("isalpha || %d\n", c);
	else
		printf("isnotalpha || %d\n", (unsigned char)*av[1]);
	return (0);
}
