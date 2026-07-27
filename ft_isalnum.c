/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:54:24 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/27 17:39:15 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("Test 1 ('A')\n");
	printf("Original : %d\n", isalnum('A') != 0);
	printf("Mine     : %d\n\n", ft_isalnum('A'));

	printf("Test 2 ('5')\n");
	printf("Original : %d\n", isalnum('5') != 0);
	printf("Mine     : %d\n\n", ft_isalnum('5'));

	printf("Test 3 ('@')\n");
	printf("Original : %d\n", isalnum('@') != 0);
	printf("Mine     : %d\n", ft_isalnum('@'));

	return (0);
}
*/
