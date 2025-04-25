/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:22:13 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/25 13:27:15 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

#include <stdio.h>
int	main(int ac, char *av[])
{
	(void)ac;
	int	c;

	c = ft_isalpha((unsigned char)*av[1]);
	if (c)
		printf("is || %d\n", c);
	else
		printf("isnot || %d\n", (unsigned char)*av[1]);
	return (0);
}
