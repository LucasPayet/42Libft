/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:27:00 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/07 11:43:46 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int	main(int ac, char *av[])
{
	(void)ac;
	(void)av;


//strrchr
//	char s[] = "tripouille";
//	printf("%s\n%d\n", ft_strrchr(s, 't' + 256), 't' + 256);

//	ft_putnbr_fd(ft_atoi(av[1]), ft_atoi(av[2]));
	char **str;

//	str = ft_substr(av[1], ft_atoi(av[2]), ft_atoi(av[3]));
//	printf("%s\n", str);

	str = ft_split("nonempty", '\0');
//	printf("%s\n", str);
	if (!str)
	{
		printf("NULL");
		return (1);
	}
	int	i = 0;
	printf("%s\n\n", str[1]);
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
/*
	char	*substr;

	substr = ft_substr(av[1], ft_atoi(av[2]), ft_atoi(av[3]));
	printf("%s\n", substr);
	*/
/*
	char	*test;
	int	size = 0;
	int	*junk = 0;

	srand( time(0));
	for (int z = 0; z < 1000; z++)
	{
		size = rand() % 16000;
		junk = malloc(size * sizeof(int));
		for (int j = 0; j < size; j++)
		{
			junk[j] = rand();
		}
		free(junk);
	}

//	char	*test;
	test = ft_calloc(1000, 1);
	int i;
	for (i = 0; i < 100; i++)
	{
		char d = test[i] + 48;
		write(1, &d, 1);
	}
	int	len = ft_atoi(av[3]);
	char	*c = ft_strnstr(av[1], av[2], len);
	
	if (c && test)
		printf("%s\n", c);
	else
		printf("NULL\n");
	free(test);
*/
//	printf("%s\n", (char *)ft_memchr(av[1], *av[2], 5));

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
