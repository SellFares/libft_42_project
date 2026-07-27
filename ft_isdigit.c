/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:51:15 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/27 17:06:21 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c <= '9' && '0' <= c);
}

/*
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("Test 1 ('A')\n");
    printf("Original : %d\n", ft_isdigit('A'));
    printf("Mine     : %d\n\n", ft_isdigit('A'));

    printf("Test 2 ('z')\n");
    printf("Original : %d\n", ft_isdigit('c'));
    printf("Mine     : %d\n\n", ft_isdigit('c'));

    printf("Test 3 ('5')\n");
    printf("Original : %d\n", ft_isdigit('5'));
    printf("Mine     : %d\n", ft_isdigit('5'));

    return (0);
}
*/
