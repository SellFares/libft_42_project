/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:50:39 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/29 19:12:30 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}

/*
#include <stdio.h>
#include <strings.h> 

int main(void)
{
    char str[] = "Hello";
    ft_bzero(str, sizeof(str));

    for (size_t i = 0; i < sizeof(str); i++)
        printf("%d ", str[i]);
    printf("\n");

    return 0;
}
*/
