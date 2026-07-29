/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 22:27:47 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/29 22:33:28 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && 'z' >= c)
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	// ft_toupper tests
	printf("=== ft_toupper ===\n");
	printf("%c -> %c\n", 'a', ft_toupper('a'));
	printf("%c -> %c\n", 'z', ft_toupper('z'));
	printf("%c -> %c\n", 'A', ft_toupper('A'));
	printf("%c -> %c\n", '5', ft_toupper('5'));
	printf("%c -> %c\n\n", '@', ft_toupper('@'));

	return (0);
}
*/
