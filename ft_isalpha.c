/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:42:40 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/27 17:38:37 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (((c <= 'z' && 'a' <= c) || (c <= 'Z' && 'A' <= c)));
}

/*
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("Test 1 ('A')\n");
    printf("Original : %d\n", isalpha('A'));
    printf("Mine     : %d\n\n", ft_isalpha('A'));

    printf("Test 2 ('z')\n");
    printf("Original : %d\n", isalpha('c'));
    printf("Mine     : %d\n\n", ft_isalpha('c'));

    printf("Test 3 ('5')\n");
    printf("Original : %d\n", isalpha('5'));
    printf("Mine     : %d\n", ft_isalpha('5'));

    return (0);
}
*/
