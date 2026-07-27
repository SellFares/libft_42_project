/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:47:53 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/27 17:56:12 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c <= 126 && 32 <= c);
}

/*
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("Test 1 ('A')\n");
	printf("Original : %d\n", isprint('A') != 0);
	printf("Mine     : %d\n\n", ft_isprint('A'));

	printf("Test 2 (' ')\n");
	printf("Original : %d\n", isprint(' ') != 0);
	printf("Mine     : %d\n\n", ft_isprint(' '));

	printf("Test 3 ('\\n')\n");
	printf("Original : %d\n", isprint('\n') != 0);
	printf("Mine     : %d\n", ft_isprint('\n'));

	return (0);
}
*/
