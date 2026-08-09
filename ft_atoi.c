/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:05:35 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/01 00:28:03 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	while (9 <= nptr[i] && nptr[i] <= 13)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		res = (nptr[i] - '0') + 10 * res;
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int res_val;
    char inp_str[30];

    strcpy(inp_str, "-1234adsnds");

    res_val = ft_atoi(inp_str);

    printf("Input String = %s\nResulting Integer = %d\n", inp_str, res_val);

    return 0;
}*/
