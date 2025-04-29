/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:27:00 by lupayet           #+#    #+#             */
/*   Updated: 2025/04/29 14:41:02 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(int ac, char *av[])
{
	(void)ac;
	printf("%s\n", (char *)ft_memchr(av[1], *av[2], 5));

/*	printf("%s\n\n", av[1]);

	ft_memmove(av[1], &av[1][5], 7);
	printf("%s\n", av[1]);
	
	memmove(av[2], &av[2][5], 7);
	printf("%s\n\n", av[2]);

	ft_memmove(&av[3][5], av[3], 7);
	printf("%s\n", av[3]);

	memmove(&av[4][5], av[4], 7);
	printf("%s\n", av[4]);
	return (0);*/
}

// test memmove => ./a.out 12345_6789^_-_-_-_- 12345_6789^_-_-_-_- //
