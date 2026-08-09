/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 21:51:11 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/30 23:45:50 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (!str)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
   const char str[] = "Welcome to India";
   const char ch = 't';

   char* result = (char*)ft_memchr(str, ch, strlen(str));

   if (result != NULL) {
       printf("'%c' found at position %ld\n", ch, result - str);
   } else {
       printf("'%c' not found in the string\n", ch);
   }
   
   return 0;
}
*/
