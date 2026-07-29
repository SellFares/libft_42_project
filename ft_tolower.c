/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 22:33:01 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/29 22:36:16 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && 'Z' >= c)
		return (c + 32);
	else
		return (c);
}

#include <stdio.h>

int	main(void)
{
	// ft_tolower tests
	printf("=== ft_tolower ===\n");
	printf("%c -> %c\n", 'A', ft_tolower('A'));
	printf("%c -> %c\n", 'Z', ft_tolower('Z'));
	printf("%c -> %c\n", 'a', ft_tolower('a'));
	printf("%c -> %c\n", '5', ft_tolower('5'));
	printf("%c -> %c\n", '@', ft_tolower('@'));

	return (0);
}
