/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:30:59 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/07 15:55:58 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(0);
		return (p);
	}
	if (size > 2147483648 / nmemb)
		return (NULL);
	p = malloc(size * nmemb);
	if (p != NULL)
		ft_memset(p, 0, size * nmemb);
	return (p);
}

/*
#include <stdio.h>
#include <malloc.h>

int main( void )
{
   long *buffer;

   //buffer = (long *)ft_calloc( 40, sizeof( long ) );
   buffer = (long *)ft_calloc( 2147483648, 1);

   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}
*/
