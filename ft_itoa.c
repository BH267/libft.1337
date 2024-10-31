/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:18:48 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/31 13:49:29 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenum(int n, int nega)
{
	int	l;

	l = 1;
	if (nega)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		l++;
	}
	if (nega)
		return (l + 1);
	return (l);
}

int	ft_nega(int n, char *num)
{
	*num = '-';
	n *= -1;
	return (n);
}

char	*ft_minhandl(int n, char *num)
{
		num = malloc(12);
		if (!num)
			return (NULL);
		num = "-2147483648\0";
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		nega;
	int		lenum;

	if (n == -2147483648)
		return (ft_minhandl(n, num));
	nega = (n < 0);
	lenum = ft_lenum (n, nega);
	num = malloc(lenum + 1);
	if (!num)
		return (NULL);
	if (nega)
		n = ft_nega(n, num);
	num[lenum--] = '\0';
	while (0 <= lenum)
	{
		if (nega && !lenum)
			break ;
		num[lenum--] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}
