/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:51:15 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/27 17:46:08 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && 127 >= c);
}

/*
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("Test 1 ('A')\n");
	printf("Original : %d\n", isascii('A') != 0);
	printf("Mine     : %d\n\n", ft_isascii('A'));

	printf("Test 2 (127)\n");
	printf("Original : %d\n", isascii(127) != 0);
	printf("Mine     : %d\n\n", ft_isascii(127));

	printf("Test 3 (128)\n");
	printf("Original : %d\n", isascii(128) != 0);
	printf("Mine     : %d\n", ft_isascii(128));

	return (0);
}
*/
