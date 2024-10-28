/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:18:48 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/27 21:39:09 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenum(int n, int nega)
{
	int	l;

	l = 1;
	if (nega)
		n *= -1;
	while	(n >= 10)
	{
		n /= 10;
		l++;
	}
	if (nega)
		return (l + 1);
	return (l);
}
char	*ft_itoa(int n)
{
	char	*num;
	int	lenum;
	int	nega;

	if (n == -2147483648)
	{
		num = "-2147483648\0";
		return (num);
	}
	nega = (n < 0);
	lenum = ft_lenum(n, nega);
	num = (char*)malloc(lenum + 1);
	if(!num)
		return (NULL);
	if (nega)
	{
		num[0] = '-';
		n *= -1;
	}
	num[lenum--] = '\0';
	while (0 >= lenum)
	{
		if (nega && !lenum)
			break;
		num[lenum--] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}
