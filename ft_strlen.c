/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:57:24 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/27 18:09:13 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("Test 1 (\"Hello\")\n");
	printf("Original : %zu\n", strlen("Hello"));
	printf("Mine     : %d\n\n", ft_strlen("Hello"));

	printf("Test 2 (\"\")\n");
	printf("Original : %zu\n", strlen(""));
	printf("Mine     : %d\n\n", ft_strlen(""));

	printf("Test 3 (\"42 Abu Dhabi\")\n");
	printf("Original : %zu\n", strlen("42 Abu Dhabi"));
	printf("Mine     : %d\n", ft_strlen("42 Abu Dhabi"));

	return (0);
}
*/
