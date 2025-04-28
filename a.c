/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:27:00 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/28 15:33:35 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(int ac, char *av[])
{
	(void)ac;
	printf("%s\n", ft_strchr(av[1], *av[2]));
/*
	printf("%s\n", av[1]);
	ft_memmove(av[1], &av[1][5], 7);
	printf("%s\n", av[1]);
	
	printf("%s\n", av[2]);
	memmove(av[2], &av[2][5], 7);
	printf("%s\n", av[1]);
	*/
	return (0);
}

// test memmove => ./a.out 12345_6789^_-_-_-_- 12345_6789^_-_-_-_- //
