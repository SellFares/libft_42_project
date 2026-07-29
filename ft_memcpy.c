/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:13:12 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/29 19:45:43 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Geeks";
    char str2[6] = "";

    // Copies contents of str1 to str2
    ft_memcpy(str2, str1, sizeof(str1));

    printf("str2 after memcpy:");
    printf("%s",str2);

    return 0;
}
*/
